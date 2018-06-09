/* made by EzioChiu.
 */

@protocol PUCAMReviewAsset <PUDisplayAsset>

@required

- (double)aspectRatio;
- (PFAssetAdjustments *)assetAdjustments;
- (NSString *)burstIdentifier;
- (NSDate *)creationDate;
- (double)duration;
- (NSString *)identifier;
- (bool)isFavorite;
- (bool)isHDR;
- (bool)isLivePhoto;
- (bool)isLivePhotoPlaceholder;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoSynchronizedDisplayTime;
- (CLLocation *)location;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (NSDate *)modificationDate;
- (unsigned long long)numberOfRepresentedAssets;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (AVAsset *)providedAVAsset;
- (AVAudioMix *)providedAudioMix;
- (NSURL *)providedFullsizeImageURL;
- (NSURL *)providedFullsizeRenderImageURL;
- (NSURL *)providedFullsizeRenderVideoURL;
- (NSDictionary *)providedImageMetadata;
- (PHLivePhoto *)providedLivePhoto;
- (UIImage *)providedPreviewImage;
- (NSURL *)providedVideoURL;
- (bool)representsBurst;

@end
