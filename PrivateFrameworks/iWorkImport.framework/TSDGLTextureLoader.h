/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLTextureLoader : NSObject

+ (id)p_textureInfoFromCGImage:(struct CGImage { }*)arg1 generateMipmaps:(bool)arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 generateMipmaps:(bool)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(bool)arg2 error:(id*)arg3;

@end
