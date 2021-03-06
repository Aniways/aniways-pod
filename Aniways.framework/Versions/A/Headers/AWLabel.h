//
//  AniwaysLabel.h
//  Aniways
//
//  Created by Ram Greenberg on 8/10/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Subclass of UILabel which supports embedding Aniways images as part of the text.
 */
@interface AWLabel : UILabel

@property (nonatomic) CGSize maxIconSize;
@property (nonatomic, getter = isTapInteractionEnabled) BOOL tapInteractionEnabled;

@end
