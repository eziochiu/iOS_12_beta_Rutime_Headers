/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVGraphicsImageRenderer : NSObject

+ (id)decodedImage:(id)arg1 opaque:(bool)arg2;
+ (id)formatWithCGImage:(struct CGImage { }*)arg1;
+ (id)formatWithUIImage:(id)arg1;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 alpha:(bool)arg2 actions:(id /* block */)arg3;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 alpha:(bool)arg2 cgContextActions:(id /* block */)arg3;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 actions:(id /* block */)arg3;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 cgContextActions:(id /* block */)arg3;
+ (id)preferredFormat;

@end
