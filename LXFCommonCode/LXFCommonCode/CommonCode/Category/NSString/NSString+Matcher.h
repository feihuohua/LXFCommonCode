//
//  NSString+Matcher.h
//  LXFCommonCode
//
//  Created by 林洵锋 on 2017/3/2.
//  Copyright © 2017年 LXF. All rights reserved.
//
//  GitHub: https://github.com/LinXunFeng
//  简书: http://www.jianshu.com/users/31e85e7a22a2

#import <Foundation/Foundation.h>

@interface NSString (Matcher)

- (NSArray *)matchWithRegex:(NSString *)regex;
- (NSString *)matchWithRegex:(NSString *)regex atIndex:(NSUInteger)index;
- (NSString *)firstMatchedGroupWithRegex:(NSString *)regex;
- (NSTextCheckingResult *)firstMatchedResultWithRegex:(NSString *)regex;

@end
