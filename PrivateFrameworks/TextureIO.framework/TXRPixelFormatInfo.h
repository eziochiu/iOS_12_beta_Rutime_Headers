/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRPixelFormatInfo : NSObject

+ (unsigned char)componentsPerPixel:(unsigned long long)arg1;
+ (bool)hasAlpha:(unsigned long long)arg1;
+ (bool)isASTC:(unsigned long long)arg1;
+ (bool)isBC1to5:(unsigned long long)arg1;
+ (bool)isBC6to7:(unsigned long long)arg1;
+ (bool)isCompressed:(unsigned long long)arg1;
+ (bool)isETC2:(unsigned long long)arg1;
+ (bool)isFloat:(unsigned long long)arg1;
+ (bool)isGammaEncoded:(unsigned long long)arg1;
+ (bool)isInteger:(unsigned long long)arg1;
+ (bool)isPVRTC:(unsigned long long)arg1;
+ (bool)isSRGB:(unsigned long long)arg1;
+ (struct TXRImageMemoryLayout { unsigned long long x1; unsigned long long x2; })packedMemoryLayoutForFormat:(void *)arg1 dimensions:(void *)arg2; // needs 2 arg types, found 1: unsigned long long
+ (unsigned char)pixelBytes:(unsigned long long)arg1;

@end
