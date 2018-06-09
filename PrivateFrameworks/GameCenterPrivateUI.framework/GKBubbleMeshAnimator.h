/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleMeshAnimator : NSObject {
    NSMutableSet * _animatingViews;
    CADisplayLink * _displayLink;
    double  _lastUpdateTime;
}

@property (nonatomic, retain) NSMutableSet *animatingViews;
@property (nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastUpdateTime;

+ (id)sharedAnimator;

- (void)addAnimatingBubbleView:(id)arg1;
- (id)animatingViews;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)displayLink;
- (id)init;
- (double)lastUpdateTime;
- (void)removeAnimatingBubbleView:(id)arg1;
- (void)setAnimatingViews:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setLastUpdateTime:(double)arg1;
- (void)update:(id)arg1;

@end
