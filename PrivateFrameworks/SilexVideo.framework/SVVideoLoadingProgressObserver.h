/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoLoadingProgressObserver : NSObject <SVVideoLoadingProgressObserving> {
    <SVVideoDurationObserving> * _durationObserver;
    SVKeyValueObserver * _loadedTimeRangesObserver;
    <SVPlayerItemObserving> * _playerItemObserver;
    double  _progress;
    id /* block */  _progressChangedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoDurationObserving> *durationObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVKeyValueObserver *loadedTimeRangesObserver;
@property (nonatomic, readonly) <SVPlayerItemObserving> *playerItemObserver;
@property (nonatomic) double progress;
@property (setter=onProgressChanged:, nonatomic, copy) id /* block */ progressChangedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)durationObserver;
- (id)initWithPlayerItemObserver:(id)arg1 durationObserver:(id)arg2;
- (id)loadedTimeRangesObserver;
- (void)onProgressChanged:(id /* block */)arg1;
- (id)playerItemObserver;
- (double)progress;
- (id /* block */)progressChangedBlock;
- (void)setProgress:(double)arg1;
- (void)updateProgressWithLoadedTimeRanges:(id)arg1 duration:(double)arg2;

@end
