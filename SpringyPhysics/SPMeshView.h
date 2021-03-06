//
//  SPMeshView.h
//  SpringyPhysics
//
//  Created by Ryan Sullivan on 4/15/12.
//  Copyright (c) 2012 Freelance Web Developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SPNode.h"
#import "SPSpring.h"
#import "SPDragNodeInfo.h"
#import <QuartzCore/QuartzCore.h>

#define kNodeRadius 32.0
#define kSpringRate 1.6
#define kSpringDamp 0.2
#define kNodeMass 1.2
#define kFPS 35.0


@interface SPMeshView : UIView {
    NSMutableArray *nodes;
    NSMutableArray *springs;
    
    CADisplayLink *displayLink;
    NSTimer *animationTimer;
    NSDate *lastAnimation;
    
    SPNode *_dragNode;
}

-(SPNode*)addNodeToPoint:(CGPoint)pt;
-(SPNode*)getNodeAtPoint:(CGPoint)pt;
-(NSArray*)springsForNode:(SPNode*)node;
-(CGRect)rectForNode:(SPNode*)node;

-(void)startAnimation;
-(void)stopAnimation;

@end
