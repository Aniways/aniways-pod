//
//  AWConfiguration.h
//  Aniways
//
//  Created by Danny Shmueli on 8/5/14.
//  Copyright (c) 2014 Aniways. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIColor;
@class UIView;
@interface AWConfiguration : NSObject

+(instancetype)sharedInstance;

/**
 *  Enables/Disables the Aniways Contextual Experience at runtime.
 */
@property (nonatomic, readwrite, getter = isContextualExprienceEnabled) BOOL contextualExprienceEnabled;

/**
 *  Enables/Disables Aniways sending analytics data.
 *  Use in scenarios when you want Aniways to suspend network usage 
 *  (for example, a VOIP call on a low bandwidth connection).
 *  Make sure to resume it later.
 */
@property (nonatomic, readwrite, getter = isNetworkUseSuspended) BOOL networkUseSuspended;


/**
 *  The tint color to tint Aniways look and feel according to the application dominant color.
 */
@property (nonatomic, copy) UIColor *appTintColor;


/**
 *  Please set this property to maintain user credits accorss devices and sessions.
 *  Each user that uses the app should have a unique user id.
 */
@property (nonatomic, readwrite, copy) NSString *userId;

/**
 *  Supply the view is which you want the contextual popup to open from. This view could be the one wrapping up your AWTextView.
 */
@property (nonatomic, weak) UIView *viewSpawningPopup;

/**
 *  Enables/Disables the Aniways logs programmatically. Value is not persistent saved.
 */
@property (nonatomic, readwrite, getter = isLogEnabled) BOOL logEnabled;

/**
 *  store the value of the size of the icons when displaying as part of a text message
 */
-(void) setWallIconSizeInText:(NSInteger)newValue;
@end
