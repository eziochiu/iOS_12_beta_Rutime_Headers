/* made by EzioChiu.
 */

@protocol PXDisplayAsset <NSObject, NSCopying>

@required

- (NSDate *)creationDate;
- (long long)isContentEqualTo:(id <PXDisplayAsset>)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (bool)representsBurst;

@optional

- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 useSaliency:(bool)arg2;
- (<PXAssetdestinationAssetCopyProperties> *)destinationAssetCopyProperties;
- (double)duration;
- (float)hdrGain;
- (NSString *)localizedGeoDescription;
- (long long)playbackStyle;
- (long long)playbackVariation;

@end
