/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface CloudPhotoServicesUtilities : NSObject

+ (struct CGSize { double x1; double x2; })dimensionsForAVAsset:(id)arg1;
+ (void)getDimensionsFromImageProperties:(id)arg1 orientationOut:(int*)arg2 widthOut:(int*)arg3 heightOut:(int*)arg4;
+ (struct CGImageSource { }*)newImageSourceFromImageAtURL:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeOfImageAtURL:(id)arg1 orientationOut:(int*)arg2;

@end
