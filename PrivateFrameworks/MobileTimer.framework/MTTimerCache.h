/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerCache : NSObject {
    bool  _needsUpdate;
    MTTimer * _nextTimer;
    NSMutableArray * _orderedTimers;
    <NAScheduler> * _serializer;
    id /* block */  _updateBlock;
}

@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) MTTimer *nextTimer;
@property (nonatomic, retain) NSMutableArray *orderedTimers;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)getCachedTimersWithCompletion:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)markNeedsUpdate;
- (bool)needsUpdate;
- (id)nextTimer;
- (id)orderedTimers;
- (id)serializer;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNextTimer:(id)arg1;
- (void)setOrderedTimers:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
