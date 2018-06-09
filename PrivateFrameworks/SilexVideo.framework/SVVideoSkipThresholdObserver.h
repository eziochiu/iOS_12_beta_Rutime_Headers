/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving> {
    bool  _loading;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoSkipThreshold> * _thresholdProvider;
    id /* block */  block;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loading;
@property (nonatomic, readonly) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoSkipThreshold> *thresholdProvider;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;
- (bool)loading;
- (void)loadingCompletedWithThreshold:(double)arg1;
- (id)loadingStateObserver;
- (void)onChange:(id /* block */)arg1;
- (id)thresholdProvider;

@end
