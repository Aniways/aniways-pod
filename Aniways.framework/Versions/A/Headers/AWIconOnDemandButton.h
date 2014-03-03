//
//  AniwaysIconOnDemandButton.h
//  Aniways
//
//  Created by Ram Greenberg on 11/11/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AWTextView.h"

/**
 *  Subclass of UIButton which adds the functionality of inserting icons on demand (without replacing part of the text).
 */
@interface AWIconOnDemandButton : UIButton

/** The AniwaysTextView that is conncted to the button.
 
  Icons which were selected through the button would be added to this textview.
  @see AWTextView
*/
@property AWTextView* textview;
@end
