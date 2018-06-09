/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVTimeline : NSObject {
    NSMutableArray * _actions;
    double  _duration;
    double  _time;
}

@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic) double duration;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)cancelScheduledBlocks;
- (void)dealloc;
- (double)duration;
- (void)executeActionsForTime:(double)arg1 withDuration:(double)arg2;
- (double)executionTimeOfTime:(double)arg1 withinDuration:(double)arg2;
- (bool)hasPassedTimeOffset:(double)arg1;
- (id)init;
- (id)performBlock:(id /* block */)arg1 at:(double)arg2;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)resetTime;
- (void)setDuration:(double)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
