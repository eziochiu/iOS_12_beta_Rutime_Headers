/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAdActionAvailabilityObserver : NSObject <SVVideoAdActionAvailabilityObserver> {
    id /* block */  _availabilityChangedBlock;
    bool  _hasActionAvailable;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoAdProviding> * _videoAdProvider;
}

@property (setter=onAvailabilityChanged:, nonatomic, copy) id /* block */ availabilityChangedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasActionAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoAdProviding> *videoAdProvider;

- (void).cxx_destruct;
- (id /* block */)availabilityChangedBlock;
- (bool)hasActionAvailable;
- (id)initWithVideoAdProvider:(id)arg1 loadingStateObserver:(id)arg2;
- (id)loadingStateObserver;
- (void)onAvailabilityChanged:(id /* block */)arg1;
- (void)setHasActionAvailable:(bool)arg1;
- (id)videoAdProvider;

@end
