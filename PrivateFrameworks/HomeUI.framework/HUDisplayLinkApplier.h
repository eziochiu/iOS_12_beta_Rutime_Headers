/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDisplayLinkApplier : HUApplier {
    bool  _applyOnlyOnProgressChanges;
    bool  _atRest;
    bool  _completesWhenAtRest;
    CADisplayLink * _displayLink;
    id /* block */  _progressInputBlock;
    unsigned long long  _restingFrameCount;
}

@property (nonatomic) bool applyOnlyOnProgressChanges;
@property (getter=isAtRest, nonatomic) bool atRest;
@property (nonatomic) bool completesWhenAtRest;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, copy) id /* block */ progressInputBlock;
@property (nonatomic) unsigned long long restingFrameCount;

- (void).cxx_destruct;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(bool)arg1;
- (bool)applyOnlyOnProgressChanges;
- (bool)complete:(bool)arg1;
- (bool)completesWhenAtRest;
- (id)displayLink;
- (double)effectiveInputProgressForBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithProgressInputBlock:(id /* block */)arg1;
- (bool)isAtRest;
- (id /* block */)progressInputBlock;
- (unsigned long long)restingFrameCount;
- (void)restingStateDidChange;
- (void)setApplyOnlyOnProgressChanges:(bool)arg1;
- (void)setAtRest:(bool)arg1;
- (void)setCompletesWhenAtRest:(bool)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setProgressInputBlock:(id /* block */)arg1;
- (void)setRestingFrameCount:(unsigned long long)arg1;
- (bool)start;

@end
