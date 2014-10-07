//
//  UIView+RSAdditions.h
//  UIViewAdditions
//
//  Created by Josh Brown on 8/2/12.
//  Copyright (c) 2012 Roadfire Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_HEIGHT fmax([[UIScreen mainScreen] bounds].size.height,[[UIScreen mainScreen] bounds].size.width)
#define SCREEN_WIDTH fmin([[UIScreen mainScreen] bounds].size.height,[[UIScreen mainScreen] bounds].size.width)
#define CONTENT_HEIGHT    (SCREEN_HEIGHT - NAV_BAR_HEIGHT - STATUS_BAR_HEIGHT)
#define STATUS_BAR_HEIGHT 20
#define NAV_BAR_HEIGHT    44

@interface UIView (RSAdditions)

@property CGFloat top;
@property CGFloat bottom;
@property CGFloat left;
@property CGFloat right;

@property CGFloat centerX;
@property CGFloat centerY;

@property CGFloat height;
@property CGFloat width;

@property CGPoint origin;
@property CGSize size;

@end
