//
//  SpeedLimitPref.h
//  SpeedLimit
//
//  Created by Michael Schrag on 8/27/08.
//  Copyright (c) 2008 m Dimension Technology. All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>
#import <SecurityInterface/SFAuthorizationView.h>
#import "Speed.h"

@interface SpeedLimitPref : NSPreferencePane {
	NSString *delay;
	NSString *hosts;
	Speed *speed;
	NSArray *rules;
	BOOL slow;
	double packetLossRatio;
	BOOL packetLossErrorSuppress;
	
	NSArrayController *speedsController;
	NSArrayController *portsController;
	NSTextField *speedLimitLabel;
	NSTableView *portsView;
	NSTextField *hostsTextField;
	NSTextField *delayTextField;
	NSPopUpButton *speedsPopUpButton;
	NSButton *addButton;
	NSButton *removeButton;
	NSButton *startStopButton;
	
	AuthorizationRef authorizationRef;
	
	NSInteger authorizationState;
	SFAuthorizationView *authorizationView;
}

@property (readwrite, strong) NSString *delay;
@property (readwrite, strong) NSString *hosts;
@property (readwrite, strong) Speed *speed;
@property (readwrite, strong) NSArray *rules;
@property (readwrite, assign) BOOL slow;
@property (readwrite, assign) double packetLossRatio;
@property (readwrite, assign) BOOL packetLossErrorSuppress;

@property (readwrite, strong) IBOutlet NSArrayController *speedsController;
@property (readwrite, strong) IBOutlet NSArrayController *portsController;
@property (readwrite, strong) IBOutlet NSTextField *speedLimitLabel;
@property (readwrite, strong) IBOutlet NSTableView *portsView;
@property (readwrite, strong) IBOutlet NSTextField *hostsTextField;
@property (readwrite, strong) IBOutlet NSTextField *delayTextField;
@property (readwrite, strong) IBOutlet NSPopUpButton *speedsPopUpButton;
@property (readwrite, strong) IBOutlet NSButton *addButton;
@property (readwrite, strong) IBOutlet NSButton *removeButton;
@property (readwrite, strong) IBOutlet NSButton *startStopButton;
@property (readwrite, strong) IBOutlet SFAuthorizationView *authorizationView;

-(void) mainViewDidLoad;

-(IBAction)addPort:(id)sender;
-(IBAction)removePort:(id)sender;
-(IBAction)toggle:(id)sender;

@end
