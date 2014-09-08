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

@end
