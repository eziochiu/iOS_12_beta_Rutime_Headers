/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {
    _PXFileBackedAssetMetadata * _metadata;
    NSString * _uniformTypeIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic, readonly) bool cloudIsDeletable;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly) double weight;

+ (id)_creationDateFromImageProperties:(id)arg1;
+ (id)_exifDateFormatter;
+ (id)_globalCache;
+ (id)_locationFromImageProperties:(id)arg1;

- (void).cxx_destruct;
- (void)_loadFileMetadataIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isAnimatedImage;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (bool)representsBurst;
- (struct CGSize { double x1; double x2; })size;
- (id)uniformTypeIdentifier;
- (id)url;
- (double)weight;

@end
