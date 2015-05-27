//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import "BookWebDetailViewController.h"

@implementation BookWebDetailViewController

@synthesize book;

#pragma mark - Private

- (void)loadWebView
{
    //  Load web detail from a fixed URL
    NSURL * anURL = [[[NSURL alloc] initWithString:book.bookURL] autorelease];
    NSURLRequest * aRequest = [[[NSURLRequest alloc] initWithURL:anURL] autorelease];
    [webView loadRequest:aRequest];
}

#pragma mark - Public

- (id)initWithBook:(Book *)aBook
{
    self = [super init];
    if (self)
    {
        self.book = aBook;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self loadWebView];
}

- (void)viewDidUnload
{
    [navigationBar release];
    navigationBar = nil;
    [webView release];
    webView = nil;
    [super viewDidUnload];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return YES;
}

- (void)dealloc
{
    [navigationBar release];
    [webView release];
    [book release];
    [super dealloc];
}

- (IBAction)doneButtonTapped:(id)sender
{
    //  Force closing overlay view with this notification
    [[NSNotificationCenter defaultCenter] postNotificationName:@"kBookWebDetailDismissed" object:nil];    
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
