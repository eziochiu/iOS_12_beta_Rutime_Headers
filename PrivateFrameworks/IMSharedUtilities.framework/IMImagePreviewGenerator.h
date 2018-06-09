/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (double)_scaleFactorForThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 targetPxSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledTargetRectForSize:(struct CGSize { double x1; double x2; })arg1 andThumbnailSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGImage { }*)newCroppedAndRescaledImageFromImage:(struct CGImage { }*)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 targetPxSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (struct CGImage { }*)newThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 imagePxSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 scale:(double)arg4;

@end
