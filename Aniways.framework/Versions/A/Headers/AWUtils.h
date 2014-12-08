//
//  AniwaysUtils.h
//  Aniways
//
//  Created by Ram Greenberg on 8/26/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Util for dealing with Aniways encoded text
 */
@interface AWUtils : NSObject

/**
*  Extracts the original text from aniways encoded text (text wont include icons).
*
*  @param aniwaysEncodedText The encoded text
*
*  @return The original text that was sent by the user, without Aniways additional encoding part. The returned string wont include any icons
*/
+(NSString*) extractOriginText:(NSString*)aniwaysEncodedText;

/**
 *  When given contexes that are no longer valid.
 *
 *  The context is an optional param that can be added to the reload data notification (in case an asset was asynchronously downloaded and the text layout need to be updated).
 *  There can be cases where the context that was given by the app is no longer valid.
 *  For example, in case the context is refer to the index in the messages model and the model was changed by additional messages that were added to its begining.
 */
+(void) invalidateContexes;

/**
*  Returns a Boolean value that indicates whether a given message represents an interactive type of message.
*
*  @param message The message
*
*  @return YES if message represents an interactive message, otherwise NO.
*/
+(BOOL) isInteractiveMessage:(NSString*)message;

/**
 *  Check if message is a sticker
 *
 *  @param aniwaysEncodedText The encoded text message
 *  @return YES if the message contains only an icon (without any additional text), otherwise return NO.
 */
+(BOOL) isStickerMessage:(NSString*) aniwaysEncodedText;


@end
