/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface AEVConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage { }*)arg1;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage { }*)arg1;
+ (char *)convertCGImageToGrayscale:(struct CGImage { }*)arg1 usingGCD:(bool)arg2 dispatchQueue:(id)arg3;
+ (struct CGImage { }*)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;

@end
