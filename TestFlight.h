//
//  TestFlight.h
//  libTestFlight
//
//  Created by Jonathan Janzen on 06/11/11.
//  Copyright 2011 TestFlight. All rights reserved.

#import <Foundation/Foundation.h>
#define TESTFLIGHT_SDK_VERSION @"0.8"

/**
 * TestFlight object
 * All methods are class level
 */
@interface TestFlight : NSObject {

}

/**
 * Add custom environment information
 * If you want to track custom information such as a user name from your application you can add it here
 * 
 * @param information A string containing the environment you are storing
 * @param key The key to store the information with
 */
+ (void)addCustomEnvironmentInformation:(NSString *)information forKey:(NSString*)key;

/**
 * Starts a TestFlight session
 *
 * @param teamToken Will be your team token obtained from https://testflightapp.com/dashboard/team/edit/ 
 */
+ (void)takeOff:(NSString *)teamToken;

/**
 * Sets custom options
 *
 * @param options NSDictionary containing the options you want to set available options are described below
 *
 *   Option                      Accepted Values                 Description
 *   reinstallCrashHandlers      [ NSNumber numberWithBool:YES ] Reinstalls crash handlers, to be used if a third party 
 *                                                               library installs crash handlers overtop of the TestFlight Crash Handlers
 */
+ (void)setOptions:(NSDictionary*)options;

/**
 * Track when a user has passed a checkpoint after the flight has taken off. Eg. passed level 1, posted high score
 *
 * @param checkpointName The name of the checkpoint, this should be a static string
 */
+ (void)passCheckpoint:(NSString *)checkpointName;

/**
 * Opens a feedback window that is not attached to a checkpoint
 */
+ (void)openFeedbackView;

@end
