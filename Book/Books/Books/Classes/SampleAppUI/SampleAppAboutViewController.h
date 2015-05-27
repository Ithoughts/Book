//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SampleAppAboutViewController : UIViewController <UIWebViewDelegate>

@property (retain, nonatomic) IBOutlet UIWebView * uiWebView;
@property (nonatomic, copy) NSString * appTitle;
@property (nonatomic, copy) NSString * appAboutPageName;
@property (nonatomic, copy) NSString * appViewControllerClassName;

- (IBAction)startButtonTapped:(id)sender;

@end
