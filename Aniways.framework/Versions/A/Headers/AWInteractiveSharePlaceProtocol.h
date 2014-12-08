//
//  AWInteractiveSharePlaceDelegate.h
//  Aniways
//
//  Created by Ram Greenberg on 6/12/14.
//  Copyright (c) 2014 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AWInteractiveSharePlaceProtocol <NSObject>

@required

- (void)sharePlaceMessage:(NSString *)shareMessage;

@end
