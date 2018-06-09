/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUElasticApplier : HUApplier {
    bool  _applyOnlyOnProgressChanges;
    bool  _completesWhenAtRest;
    double  _currentVelocity;
    CADisplayLink * _displayLink;
    unsigned long long  _frameCount;
    double  _friction;
    double  _previousForce;
    bool  _progressBeginsFromInitialInputProgress;
    id /* block */  _progressInputBlock;
    unsigned long long  _restingFrameCount;
    double  _tension;
}

@property (nonatomic) bool applyOnlyOnProgressChanges;
@property (nonatomic) bool completesWhenAtRest;
@property (nonatomic) double currentVelocity;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) double friction;
@property (nonatomic) double previousForce;
@property (nonatomic) bool progressBeginsFromInitialInputProgress;
@property (nonatomic, copy) id /* block */ progressInputBlock;
@property (nonatomic) unsigned long long restingFrameCount;
@property (nonatomic) double tension;

- (void).cxx_destruct;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(bool)arg1;
- (bool)applyOnlyOnProgressChanges;
- (bool)complete:(bool)arg1;
- (bool)completesWhenAtRest;
- (double)currentVelocity;
- (id)displayLink;
- (unsigned long long)frameCount;
- (double)friction;
- (id)init;
- (id)initWithProgressInputBlock:(id /* block */)arg1;
- (double)previousForce;
- (bool)progressBeginsFromInitialInputProgress;
- (id /* block */)progressInputBlock;
- (unsigned long long)restingFrameCount;
- (void)setApplyOnlyOnProgressChanges:(bool)arg1;
- (void)setCompletesWhenAtRest:(bool)arg1;
- (void)setCurrentVelocity:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setFrameCount:(unsigned long long)arg1;
- (void)setFriction:(double)arg1;
- (void)setPreviousForce:(double)arg1;
- (void)setProgressBeginsFromInitialInputProgress:(bool)arg1;
- (void)setProgressInputBlock:(id /* block */)arg1;
- (void)setRestingFrameCount:(unsigned long long)arg1;
- (void)setTension:(double)arg1;
- (bool)start;
- (double)tension;

@end
