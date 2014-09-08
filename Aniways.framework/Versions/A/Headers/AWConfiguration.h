//
//  AWConfiguration.h
//  Aniways
//
//  Created by Danny Shmueli on 8/5/14.
//  Copyright (c) 2014 Aniways. All rights reserved.
//

#import <Foundation/Foundation.h>

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

@end
