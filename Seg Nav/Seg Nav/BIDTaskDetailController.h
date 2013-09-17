//
//  BIDTaskDetailController.h
//  Seg Nav
//
//  Created by Maria Alice C. Lim on 9/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDTaskDetailController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (copy, nonatomic) NSDictionary *selection;
@property (weak, nonatomic) id delegate;
@end
