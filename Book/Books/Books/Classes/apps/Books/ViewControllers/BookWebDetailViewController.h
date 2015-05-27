//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "Book.h"

@interface BookWebDetailViewController : UIViewController
{
    IBOutlet UIWebView * webView;
    IBOutlet UINavigationBar * navigationBar;
    Book * book;

}
@property (retain) Book * book;

- (id)initWithBook:(Book *)aBook;
- (IBAction)doneButtonTapped:(id)sender;

@end
