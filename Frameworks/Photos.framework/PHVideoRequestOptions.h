/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequestOptions : NSObject {
    bool  _allowMediumHighQuality;
    long long  _contentMode;
    long long  _deliveryMode;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    bool  _restrictToPlayableOnCurrentDevice;
    bool  _routeToNewImageManager;
    bool  _streamingAllowed;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    long long  _version;
    bool  _videoComplementAllowed;
}

@property (getter=isMediumHighQualityAllowed, nonatomic) bool allowMediumHighQuality;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long deliveryMode;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool restrictToPlayableOnCurrentDevice;
@property (nonatomic) bool routeToNewImageManager;
@property (getter=isStreamingAllowed, nonatomic) bool streamingAllowed;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) long long version;
@property (getter=isVideoComplementAllowed, nonatomic) bool videoComplementAllowed;

- (void).cxx_destruct;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (id)description;
- (id)init;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)isVideoComplementAllowed;
- (id /* block */)progressHandler;
- (bool)restrictToPlayableOnCurrentDevice;
- (bool)routeToNewImageManager;
- (void)setAllowMediumHighQuality:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRestrictToPlayableOnCurrentDevice:(bool)arg1;
- (void)setRouteToNewImageManager:(bool)arg1;
- (void)setStreamingAllowed:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVersion:(long long)arg1;
- (void)setVideoComplementAllowed:(bool)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (long long)version;

@end