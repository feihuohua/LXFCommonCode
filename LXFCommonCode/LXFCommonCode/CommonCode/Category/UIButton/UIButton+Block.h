//
//  UIButton+Block.h
//  LXFCommonCode
//
//  Created by 林洵锋 on 2017/3/2.
//  Copyright © 2017年 LXF. All rights reserved.
//
//  GitHub: https://github.com/LinXunFeng
//  简书: http://www.jianshu.com/users/31e85e7a22a2

#import <UIKit/UIKit.h>
typedef void (^TouchedBlock)(NSInteger tag);

@interface UIButton (Block)

-(void)addActionHandler:(TouchedBlock)touchHandler;

@end
