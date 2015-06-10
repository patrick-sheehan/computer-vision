//
//  TVBulletSeekerAlgorithm.h
//  ComputerVision
//
//  Created by Patrick Sheehan on 6/2/15.
//  Copyright (c) 2015 Sheehan. All rights reserved.
//

#import "Headers.h"

// Value between [0-1], used in density filter
#define BULLET_DENSITY_THRESHOLD 0.75

@interface TVBulletSeekerAlgorithm : NSObject

+ (NSArray *)getTVBulletCandidatesFromDiffMatrix:(cv::Mat)diff;
+ (void)floodFill:(CGPoint)position andBullet:(TVBullet *)newBullet andDiffMat:(cv::Mat)diff andDictVisited:(NSMutableArray *)visited;
+ (NSArray *)filterTVBulletsByDensity:(NSArray *)tvBullets;




@end