/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImageConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage { }*)arg1;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 dispatchQueue:(id)arg3 cacheContext:(bool)arg4;
+ (char *)convertCGImageToGrayscale:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 cacheContext:(bool)arg3;

@end
