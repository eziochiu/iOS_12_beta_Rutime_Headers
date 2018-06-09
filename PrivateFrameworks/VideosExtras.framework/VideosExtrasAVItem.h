/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasAVItem : MPStoreAVItem <VideosAVItemCapability> {
    IKAssetElement * _assetElement;
    bool  _background;
    bool  _loadedHLS;
    unsigned long long  _mediaType;
    id  _rtcReportingParentHierarchyToken;
    NSString * _rtcReportingServiceIdentifier;
}

@property (nonatomic, readonly) IKAssetElement *assetElement;
@property (getter=isBackground, nonatomic, readonly) bool background;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) bool overrideCurrentItemIsReady;
@property (nonatomic, readonly) unsigned long long overrideType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNotification;
@property (nonatomic, readonly) bool supportsPictureInPicture;
@property (nonatomic, readonly) bool supportsScrubbing;

- (void).cxx_destruct;
- (long long)_expectedPlaybackMode;
- (void)_networkSettingsChanged:(id)arg1;
- (bool)allowsStoreBagStreamingKeyURLsFallback;
- (id)assetElement;
- (void)dealloc;
- (id)initWithAssetElement:(id)arg1 mediaType:(unsigned long long)arg2 isBackground:(bool)arg3;
- (bool)isAssetURLValid;
- (bool)isBackground;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (bool)isiTunesStoreStream;
- (void)loadAssetAndPlayerItem;
- (unsigned long long)mediaType;
- (id)rtcReportingParentHierarchyToken;
- (id)rtcReportingServiceIdentifier;
- (id)rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (unsigned long long)streamType;
- (bool)supportsPictureInPicture;
- (long long)type;

@end
