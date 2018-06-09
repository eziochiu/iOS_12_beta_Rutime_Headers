/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTorchPattern : NSObject {
    CAAnimationGroup * __animationGroup;
    double  __lastUpdateTime;
    long long  __type;
    double  _startTime;
    float  _torchLevel;
}

@property (nonatomic, readonly) CAAnimationGroup *_animationGroup;
@property (nonatomic, readonly) double _lastUpdateTime;
@property (nonatomic, readonly) long long _type;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) float torchLevel;

- (void).cxx_destruct;
- (id)_animationGroup;
- (id)_blinkAnimationGroup;
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_doubleBlinkAnimationGroup;
- (double)_lastUpdateTime;
- (id)_longPatternAnimationGroup;
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_shortPatternAnimationGroup;
- (long long)_type;
- (void)_updateAnimationGroup;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (float)torchLevel;
- (void)updateAtTime:(double)arg1;

@end
