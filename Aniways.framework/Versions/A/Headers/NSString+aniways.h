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

/**
 Calculates and returns the bounding rect for the receiver drawn using the given options and display characteristics, within the specified rectangle in the current graphics context.
 To correctly draw and size multi-line text, pass NSStringDrawingUsesLineFragmentOrigin in the options parameter.
 This method returns fractional sizes (in the size component of the returned CGRect); to use a returned size to size views, you must raise its value to the nearest higher integer using the ceil function.
 This method returns the actual bounds of the glyphs in the string. Some of the glyphs (spaces, for example) are allowed to overlap the layout constraints specified by the size passed in, so in some cases the width value of the size component of the returned CGRect can exceed the width value of the size parameter.
 
 @param size The size of the rectangle to draw in.
 @param options String drawing options.
 @param attributes A dictionary of text attributes to be applied to the string. These are the same attributes that can be applied to an NSAttributedString object, but in the case of NSString objects, the attributes apply to the entire string, rather than ranges within the string.
 @param context The string drawing context to use for the receiver, specifying minimum scale factor and tracking adjustments.
 
 @return The bounding rect for the receiver drawn using the given options and display characteristics. The rect origin returned from this method is the first glyph origin.
*/
- (CGRect)aniwaysBoundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options attributes:(NSDictionary *)attributes context:(NSStringDrawingContext *)context;

/**
 Calculates and returns the bounding rect for the receiver drawn using the given options and display characteristics, within the specified rectangle in the current graphics context.
 To correctly draw and size multi-line text, pass NSStringDrawingUsesLineFragmentOrigin in the options parameter.
 This method returns fractional sizes (in the size component of the returned CGRect); to use a returned size to size views, you must raise its value to the nearest higher integer using the ceil function.
 This method returns the actual bounds of the glyphs in the string. Some of the glyphs (spaces, for example) are allowed to overlap the layout constraints specified by the size passed in, so in some cases the width value of the size component of the returned CGRect can exceed the width value of the size parameter.
 
 @param size The size of the rectangle to draw in.
 @param options String drawing options.
 @param attributes A dictionary of text attributes to be applied to the string. These are the same attributes that can be applied to an NSAttributedString object, but in the case of NSString objects, the attributes apply to the entire string, rather than ranges within the string.
 @param context The string drawing context to use for the receiver, specifying minimum scale factor and tracking adjustments.
 @param context An optional context that would be added to the reload data notification (in case an asset was asynchronously downloaded and the text layout need to be updated)
 
 @return The bounding rect for the receiver drawn using the given options and display characteristics. The rect origin returned from this method is the first glyph origin.
 */
- (CGRect)aniwaysBoundingRectWithSize:(CGSize)size options:(NSStringDrawingOptions)options attributes:(NSDictionary *)attributes context:(NSStringDrawingContext *)context textLayoutChangedContext:(id)layoutChangedContext;

@end