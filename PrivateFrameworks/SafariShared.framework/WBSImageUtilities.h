/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSImageUtilities : NSObject

+ (id)_decodeHelperConnection;
+ (id)_pixelDataForImage:(id)arg1;
+ (void)decodeImageData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)flatImage:(id)arg1 withColor:(id)arg2;
+ (bool)image:(id)arg1 isEqualToImage:(id)arg2;
+ (struct CGSize { double x1; double x2; })imageSizeScalingSize:(struct CGSize { double x1; double x2; })arg1 proportionallyToFitSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)resizedImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)squareThumbnailImageFromImage:(id)arg1 thumbnailWidthInPixels:(double)arg2;

@end
