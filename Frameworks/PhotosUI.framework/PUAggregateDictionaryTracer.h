/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAggregateDictionaryTracer : NSObject {
    long long  __assetPlayCount;
    NSMapTable * __browsingViewModelTracers;
    NSDate * __lastPlayStartDate;
    <PUDisplayAsset> * __lastPlayedAsset;
    <PUDisplayAsset> * __lastViewedAsset;
    <PUDisplayAsset> * __streamedVideo;
    double  __streamedVideoBeginTime;
    bool  __streamedVideoDidStartPlaying;
    long long  __streamedVideoStallCount;
}

@property (setter=_setAssetPlayCount:, nonatomic) long long _assetPlayCount;
@property (nonatomic, readonly) NSMapTable *_browsingViewModelTracers;
@property (setter=_setLastPlayStartDate:, nonatomic, retain) NSDate *_lastPlayStartDate;
@property (setter=_setLastPlayedAsset:, nonatomic) <PUDisplayAsset> *_lastPlayedAsset;
@property (setter=_setLastViewedAsset:, nonatomic) <PUDisplayAsset> *_lastViewedAsset;
@property (setter=_setStreamedVideo:, nonatomic) <PUDisplayAsset> *_streamedVideo;
@property (setter=_setStreamedVideoBeginTime:, nonatomic) double _streamedVideoBeginTime;
@property (setter=_setStreamedVideoDidStartPlaying:, nonatomic) bool _streamedVideoDidStartPlaying;
@property (setter=_setStreamedVideoStallCount:, nonatomic) long long _streamedVideoStallCount;

+ (id)sharedTracer;

- (void).cxx_destruct;
- (long long)_assetPlayCount;
- (long long)_assetTypeForAsset:(id)arg1;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_browsingViewModelTracers;
- (id)_lastPlayStartDate;
- (id)_lastPlayedAsset;
- (id)_lastViewedAsset;
- (void)_setAssetPlayCount:(long long)arg1;
- (void)_setLastPlayStartDate:(id)arg1;
- (void)_setLastPlayedAsset:(id)arg1;
- (void)_setLastViewedAsset:(id)arg1;
- (void)_setStreamedVideo:(id)arg1;
- (void)_setStreamedVideoBeginTime:(double)arg1;
- (void)_setStreamedVideoDidStartPlaying:(bool)arg1;
- (void)_setStreamedVideoStallCount:(long long)arg1;
- (id)_streamedVideo;
- (double)_streamedVideoBeginTime;
- (bool)_streamedVideoDidStartPlaying;
- (long long)_streamedVideoStallCount;
- (id)init;
- (void)invalidateContext:(id)arg1;
- (void)streamedVideoPlaybackBegan:(id)arg1;
- (void)streamedVideoPlaybackEnded;
- (void)streamedVideoPlaybackStalled:(id)arg1;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;
- (void)userBrowsedOneUpFor:(double)arg1;
- (void)userDidPlayAssetInOneUp:(id)arg1;
- (void)userStartedViewingAssetCollection:(id)arg1;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userViewedAssetInOneUp:(id)arg1;
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;
- (void)userViewedPhotoInOneUpFor:(double)arg1;
- (void)userWillPlayAssetInOneUp:(id)arg1;
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;

@end
