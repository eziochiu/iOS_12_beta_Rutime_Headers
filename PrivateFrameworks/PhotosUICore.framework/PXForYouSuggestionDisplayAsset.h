/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionDisplayAsset : NSObject <PUDisplayAsset, PXPhotoKitAdjustedDisplayAsset> {
    NSString * _adjustedContentIdentifier;
    <PXDisplayAsset> * _keyAsset;
    PHAsset * _photoKitAsset;
    <PXDisplaySuggestion> * _suggestion;
}

@property (nonatomic, readonly) NSString *adjustedContentIdentifier;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (getter=isLivePhoto, nonatomic, readonly) bool livePhoto;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) PHAsset *photoKitAsset;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly) <PXDisplaySuggestion> *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) bool wantsAdjustments;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)adjustedContentIdentifier;
- (id)applyAdjustmentsToEditModel:(id)arg1 editSource:(id)arg2;
- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 useSaliency:(bool)arg2;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2;
- (bool)isAnimatedImage;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestionDisplayAsset:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (id)keyAsset;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)photoKitAsset;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (bool)representsBurst;
- (id)suggestion;
- (id)uniformTypeIdentifier;
- (bool)wantsAdjustments;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (double)duration;
- (bool)hasPhotoColorAdjustments;
- (bool)isLivePhoto;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (id)location;
- (id)modificationDate;
- (unsigned long long)originalFilesize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)uuid;

@end
