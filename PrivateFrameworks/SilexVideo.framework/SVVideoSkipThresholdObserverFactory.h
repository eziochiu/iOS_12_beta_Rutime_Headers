/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipThresholdObserverFactory : NSObject <SVVideoSkipThresholdObserverFactory> {
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoSkipThresholdProviding> * _skipThresholdProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SVVideoSkipThresholdProviding> *skipThresholdProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createThresholdObserverForVideo:(id)arg1;
- (id)initWithSkipThresholdProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;
- (id)loadingStateObserverFactory;
- (id)skipThresholdProvider;

@end
