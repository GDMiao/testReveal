//
//  testWindow.h
//  testReveal
//
//  Created by 王迎博 on 16/7/18.
//  Copyright © 2016年 王迎博. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface testWindow : UIWindow

+ (testWindow *)sharedInstance;

- (void)show;

@end
