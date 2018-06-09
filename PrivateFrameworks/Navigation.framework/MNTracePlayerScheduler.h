/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayerScheduler : NSObject {
    <MNTracePlayerSchedulerDelegate> * _delegate;
    double  _lastTimerScheduleTime;
    MNTracePlayerTimelineStream * _nextTimelineStream;
    double  _position;
    double  _speedMultiplier;
    NSMutableArray * _timelineStreams;
    NSTimer * _timer;
}

@property (nonatomic) <MNTracePlayerSchedulerDelegate> *delegate;
@property (nonatomic) double position;
@property (nonatomic) double speedMultiplier;

- (void).cxx_destruct;
- (void)_timerUpdated:(id)arg1;
- (void)_update;
- (void)addTimelineStream:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)pause;
- (double)position;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (double)speedMultiplier;

@end
