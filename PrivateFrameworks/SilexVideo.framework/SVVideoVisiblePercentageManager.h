/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVisiblePercentageManager : NSObject <SVVideoVisiblePercentageManager> {
    <SVVideoVisiblePercentageProviderFactory> * _visiblePercentageProviderFactory;
    SVWeakObjectCache * _visiblePercentageProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoVisiblePercentageProviderFactory> *visiblePercentageProviderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *visiblePercentageProviders;

- (void).cxx_destruct;
- (id)_visiblePercentageProviderForVideo:(id)arg1;
- (id)initWithVisiblePercentageProviderFactory:(id)arg1;
- (id)visiblePercentageProviderFactory;
- (id)visiblePercentageProviderForVideo:(id)arg1;
- (id)visiblePercentageProviders;
- (id)visiblePercentageReporterForVideo:(id)arg1;

@end
