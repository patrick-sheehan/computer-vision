//
//  TVContentViewController.h
//  ComputerVision
//
//  Created by Patrick Sheehan on 6/11/15.
//  Copyright (c) 2015 Sheehan. All rights reserved.
//

#import "Headers.h"

@interface TVContentViewController : UIViewController

@property (assign, nonatomic) NSInteger indexNumber;
@property (strong, nonatomic) UIImageView *contentImageView;
@property (strong, nonatomic) NSMutableArray *circles;


- (id)initWithImage:(UIImage *)image Index:(NSUInteger)index;
- (void)loadImage:(UIImage *)image;
- (void)addOverlay:(UIView *)overlay;

- (void)performBulletCalculationWithFirst:(UIImage *)image1 Second:(UIImage *)image2;

@end
