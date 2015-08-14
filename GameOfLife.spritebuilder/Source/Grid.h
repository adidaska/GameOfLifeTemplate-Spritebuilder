//
//  Grid.h
//  GameOfLife
//
//  Created by Martin Graham on 8/11/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property(nonatomic, assign) int totalAlive;
@property(nonatomic, assign) int generation;

-(void)evolveStep;
-(void)countNeighbors;
-(void)updateStatus;
-(void)updateCreatures;
-(BOOL)isIndexValidForX;

@end
