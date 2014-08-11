//
//  BlogPost.h
//  BlogReader
//
//  Created by Deepa Arora on 5/19/14.
//  Copyright (c) 2014 Amit Bijlani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (nonatomic,strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;


- (id) initWithTitle:(NSString*)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *)thumbnailURL;
- (NSString *) formattedDate;


@end

