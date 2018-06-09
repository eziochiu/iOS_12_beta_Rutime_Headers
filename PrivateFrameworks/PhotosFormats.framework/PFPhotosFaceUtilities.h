/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFPhotosFaceUtilities : NSObject

+ (id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(bool)arg3;
+ (struct CGSize { double x1; double x2; })faceTileSizeAdjustingForImageAspectRatio:(struct CGSize { double x1; double x2; })arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;
+ (bool)getCropRectForPortraitImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6;
+ (long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4;
+ (id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(bool)arg3 matchScores:(id*)arg4;

@end
