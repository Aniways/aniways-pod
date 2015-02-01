//
//  AniwaysAnimatedAttachmentTextViewDelegate.h
//  Aniways
//
//  Created by Danny Shmueli on 1/15/15.
//  Copyright (c) 2015 Ram Greenberg. All rights reserved.
//
#import <Foundation/Foundation.h>


extern NSString *const kAWAnimatedAttachmentThumbnailUrlKey;
extern NSString *const kAWAnimatedAttachmentImageUrlKey;
extern NSString *const kAWAnimatedAttachmentImageSizeKey;


@protocol AWAnimatedAttachmentTextViewDelegate <NSObject>

-(void)attachmentSelectedFromPopup:(NSDictionary *)attachment;

@end