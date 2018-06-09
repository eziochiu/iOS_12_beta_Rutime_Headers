/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMovieMediaObject : CKAVMediaObject {
    AVURLAsset * _asset;
    bool  _checkedVideoInfo;
    bool  _hasVideoTrack;
    bool  _isAppleAutoloopVideo;
    bool  _isAppleAutoloopVideoInitialized;
    bool  _isAutoloopVideo;
    bool  _isAutoloopVideoInitialized;
    bool  _isJellyfishInitialized;
    bool  _isJellyfishVideo;
    struct CGSize { 
        double width; 
        double height; 
    }  _pxSize;
    UIImage * _thumbnail;
}

@property (nonatomic, retain) AVURLAsset *asset;
@property (nonatomic) bool checkedVideoInfo;
@property (nonatomic) bool hasVideoTrack;
@property (nonatomic) bool isAppleAutoloopVideo;
@property (nonatomic) bool isAppleAutoloopVideoInitialized;
@property (nonatomic) bool isAutoloopVideo;
@property (nonatomic) bool isAutoloopVideoInitialized;
@property (nonatomic) bool isJellyfishInitialized;
@property (nonatomic) bool isJellyfishVideo;
@property (nonatomic) struct CGSize { double x1; double x2; } pxSize;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;
+ (struct CGImage { }*)playButtonPreviewForCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 isFromMe:(bool)arg3;
+ (id)playButtonPreviewForUIImage:(id)arg1 scale:(double)arg2 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

- (void).cxx_destruct;
- (bool)_assetContainsMetadataKey:(id)arg1;
- (id)asset;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (bool)canExport;
- (bool)checkedVideoInfo;
- (void)export:(id)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)hasNoVideoTrack;
- (bool)hasVideoTrack;
- (bool)isAppleAutoloopVideo;
- (bool)isAppleAutoloopVideoInitialized;
- (bool)isAutoloopVideo;
- (bool)isAutoloopVideoInitialized;
- (bool)isJellyfishInitialized;
- (bool)isJellyfishVideo;
- (int)mediaType;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (struct CGSize { double x1; double x2; })pxSize;
- (void)setAsset:(id)arg1;
- (void)setCheckedVideoInfo:(bool)arg1;
- (void)setHasVideoTrack:(bool)arg1;
- (void)setIsAppleAutoloopVideo:(bool)arg1;
- (void)setIsAppleAutoloopVideoInitialized:(bool)arg1;
- (void)setIsAutoloopVideo:(bool)arg1;
- (void)setIsAutoloopVideoInitialized:(bool)arg1;
- (void)setIsJellyfishInitialized:(bool)arg1;
- (void)setIsJellyfishVideo:(bool)arg1;
- (void)setPxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)updateVideoInfo;
- (bool)validatePreviewFormat;

@end
