/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditModelChange : PUViewModelChange {
    bool  _videoBuilderChanged;
    bool  _videoDurationChanged;
    bool  _videoSizeChanged;
    bool  _videoTrimRegionChanged;
}

@property (setter=_setVideoBuilderChanged:, nonatomic) bool videoBuilderChanged;
@property (setter=_setVideoDurationChanged:, nonatomic) bool videoDurationChanged;
@property (setter=_setVideoSizeChanged:, nonatomic) bool videoSizeChanged;
@property (setter=_setVideoTrimRegionChanged:, nonatomic) bool videoTrimRegionChanged;

- (void)_setVideoBuilderChanged:(bool)arg1;
- (void)_setVideoDurationChanged:(bool)arg1;
- (void)_setVideoSizeChanged:(bool)arg1;
- (void)_setVideoTrimRegionChanged:(bool)arg1;
- (bool)hasChanges;
- (bool)videoBuilderChanged;
- (bool)videoDurationChanged;
- (bool)videoSizeChanged;
- (bool)videoTrimRegionChanged;

@end
