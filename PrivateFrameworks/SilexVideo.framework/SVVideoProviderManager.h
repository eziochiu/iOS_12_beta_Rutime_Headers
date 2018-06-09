/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoProviderManager : NSObject <SVVideoEventTrackerProviding, SVVideoProviderProviding, SVVideoSkipThresholdProviding, SVVideoURLProviderFactory> {
    <SVVideoAdProviderFactory> * _videoAdProviderFactory;
    SVWeakObjectCache * _videoAdProviders;
    <SVVideoProviderFactory> * _videoProviderFactory;
    SVWeakObjectCache * _videoProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoAdProviderFactory> *videoAdProviderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *videoAdProviders;
@property (nonatomic, readonly) <SVVideoProviderFactory> *videoProviderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *videoProviders;

- (void).cxx_destruct;
- (id)createURLProviderForVideo:(id)arg1;
- (id)initWithVideoProviderFactory:(id)arg1 videoAdProviderFactory:(id)arg2;
- (id)skipThresholdForVideo:(id)arg1;
- (id)videoAdProviderFactory;
- (id)videoAdProviderForVideo:(id)arg1;
- (id)videoAdProviders;
- (id)videoEventTrackerForVideo:(id)arg1;
- (id)videoProviderFactory;
- (id)videoProviderForVideo:(id)arg1;
- (id)videoProviders;

@end
