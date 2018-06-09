/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageRowReader : NSObject <ImageRowReading> {
    short  alpha;
    short  blue;
    unsigned long long  bpr;
    struct CGColorSpace { } * cs;
    void * data;
    short  green;
    unsigned long long  height;
    short  red;
    unsigned long long  width;
}

+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace { }*)arg3;
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace { }*)arg3 usingContext:(id)arg4;
+ (id)forImage:(id)arg1 usingContext:(id)arg2;
+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace { }*)arg3;
+ (id)fromImage:(struct CGImage { }*)arg1;
+ (id)fromImageFile:(id)arg1;
+ (id)withDictionary:(id)arg1;

- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace { }*)arg2;
- (short)alpha;
- (short)blue;
- (unsigned int)bytesPerPixel;
- (void)dealloc;
- (void)dumpImage:(id)arg1;
- (void)dumpImageAsDeviceRGB:(id)arg1;
- (void)dumpImageAsDict:(id)arg1;
- (short)green;
- (unsigned long long)height;
- (id)init;
- (short)red;
- (const char *)rowAtIndex:(unsigned int)arg1;
- (unsigned long long)width;

@end
