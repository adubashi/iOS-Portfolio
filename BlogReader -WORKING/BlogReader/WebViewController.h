//
//  WebViewController.h
//  BlogReader
//
//  Created by Deepa Arora on 5/19/14.
//  Copyright (c) 2014 Amit Bijlani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *webView;
@property (strong, nonatomic) NSURL *blogPostURL;



@end
