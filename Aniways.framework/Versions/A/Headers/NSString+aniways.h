//
//  NSString (aniways)
//  Aniways
//
//  Created by Ram Greenberg on 5/22/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  NSString category for calculating the displaying size of Aniways text.
 */
@interface NSString (aniways)

/**
*  Returns the size of the string if it were rendered with the specified constraints.
*
*  @param font The font to use for computing the string size.
*  @param size The maximum acceptable size for the string. This value is used to calculate where line breaks and wrapping would occur.
*
*  @return The width and height of the resulting string’s bounding box. These values may be rounded up to the nearest whole number.
*/
-(CGSize)aniwaysSizeWithFont:(UIFont*)font constrainedToSize:(CGSize)size;

/**
 *  Returns the size of the string if it were rendered with the specified constraints.
 *
 *  @param font The font to use for computing the string size.
 *  @param size The maximum acceptable size for the string. This value is used to calculate where line breaks and wrapping would occur.
 *  @param context An optional context that would be added to the reload data notification (in case an asset was asynchronously downloaded and the text layout need to be updated)
 *
 *  @return The width and height of the resulting string’s bounding box. These values may be rounded up to the nearest whole number.
 */
-(CGSize)aniwaysSizeWithFont:(UIFont*)font constrainedToSize:(CGSize)size textLayoutChangedContext:(id)context;
@end