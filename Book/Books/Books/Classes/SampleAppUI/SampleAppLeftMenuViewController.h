//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleAppSlidingMenuController;

@interface SampleAppLeftMenuViewController : UIViewController
{
    id observer;
}
@property (nonatomic, retain) UITableView * tableView;
@property (nonatomic, assign) SampleAppSlidingMenuController * slidingMenuViewController;

- (void) updateMenu;

@end
