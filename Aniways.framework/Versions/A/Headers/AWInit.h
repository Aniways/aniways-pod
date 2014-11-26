//
//  AniwaysInit.h
//  Aniways
//
//  Created by Ram Greenberg on 5/9/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  Use this class to init Aniways.
 */
@interface AWInit : NSObject

/**
*  This is the designated initializer for Aniways objects.
*
*  @param appId   The application id that was assigned to your app.
*/
+ (void) initAniwaysWithAppId:(NSString*)appId;

/**
 *  This is the designated initializer for Aniways objects.
 *
 *  @param appId  The application id that was assigned to your app.
 *  @param userId The unique current user id - this is for maitnaing the store credits accross devices and installs. You can also set the user later times using the [AWConfiguration sharedInstance].userId
 *
 */
+ (void) initAniwaysWithAppId:(NSString*)appId andUserId:(NSString *)userId;
@end
