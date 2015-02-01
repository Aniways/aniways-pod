//
//  AniwaysTextView.h
//  Aniways
//
//  Created by Ram Greenberg on 3/28/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AWAnimatedAttachmentTextViewDelegate;

/**
 *  Subclass of UITextView which adds the functionality of Aniways text recognition and enables embedding images.
 */
@interface AWTextView : UITextView <UITextViewDelegate>

/**
 *  Used for clients who wish to display the selected Animated Gif from the popup not in the textview but a custom place.
 */
@property (nonatomic, weak) id<AWAnimatedAttachmentTextViewDelegate> animatedAttachmentTextViewDelegate;

@end
