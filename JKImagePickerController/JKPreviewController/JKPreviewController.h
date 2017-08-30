//
//  ProductPhotoViewController.h
//  jiankemall
//
//  Created by jianke2 on 15/10/21.
//  Copyright © 2015年 jianke. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JKPreviewController : UIViewController


+ (UINavigationController *)createWith:(NSMutableArray *)photos
                        blackPageIndex:(int)blackPageIndex;

@property (nonatomic, strong) NSMutableArray *photos;

@property (nonatomic, assign) int blackPageIndex;




@end