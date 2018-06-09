/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory> {
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoProviderProviding> * _videoProviderProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoProviderProviding> *videoProviderProvider;

- (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;
- (id)loadingStateObserverFactory;
- (id)videoProviderProvider;

@end
