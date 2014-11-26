//
//  AniwaysSettingsTableViewController.h
//  Aniways
//
//  Created by Ram Greenberg on 10/28/14.
//  Copyright (c) 2014 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AniwaysSettingsDelegate <NSObject>

-(void) didPressCloseSettingsButton;

@end

@interface AWSettingsTableViewController : UITableViewController

@property (nonatomic, weak) id<AniwaysSettingsDelegate> delegate;

extern NSString *const kAniwaysDisabledAutoSuggestEmoticonsNotification;
extern NSString *const kAniwaysDisabledEmoticonsNotification;

@end
