/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLUIImage : BLImage

- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)imageOrientation;
- (id)initWithFileAtURL:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (double)scale;

@end
