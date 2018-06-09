/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackProgressObserver : NSObject <SVVideoPlaybackProgressObserving> {
    double  _duration;
    <SVVideoDurationObserving> * _durationObserver;
    <SVVideoPeriodicTimeObserving> * _periodicTimeObserver;
    double  _progress;
    id /* block */  _progressChangedBlock;
    id /* block */  _resetBlock;
    double  _time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, readonly) <SVVideoDurationObserving> *durationObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPeriodicTimeObserving> *periodicTimeObserver;
@property (nonatomic) double progress;
@property (setter=onProgressChanged:, nonatomic, copy) id /* block */ progressChangedBlock;
@property (setter=onReset:, nonatomic, copy) id /* block */ resetBlock;
@property (readonly) Class superclass;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (double)duration;
- (id)durationObserver;
- (id)initWithPeriodicTimeObserver:(id)arg1 durationObserver:(id)arg2;
- (void)onProgressChanged:(id /* block */)arg1;
- (void)onReset:(id /* block */)arg1;
- (id)periodicTimeObserver;
- (double)progress;
- (id /* block */)progressChangedBlock;
- (id /* block */)resetBlock;
- (void)setDuration:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (void)updateProgressWithTime:(double)arg1 duration:(double)arg2;

@end
