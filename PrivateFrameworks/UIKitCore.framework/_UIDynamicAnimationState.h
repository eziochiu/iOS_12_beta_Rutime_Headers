/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDynamicAnimationState : NSObject {
    NSMutableArray * _activeAnimations;
    CADisplayLink * _displayLink;
    double  _lastUpdateTime;
    UIScreen * _screen;
    bool  _shouldSchedYield;
    NSTimer * _timer;
}

@end
