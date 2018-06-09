/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCVPixelImageBuffer : BLPixelImageBuffer {
    struct CGContext { } * _cgcontext;
    struct __CVBuffer { } * _pixelBuffer;
}

- (void)accessPixelsByAddressInBlock:(id /* block */)arg1;
- (void)accessPixelsByContextInBlock:(id /* block */)arg1;
- (struct CGContext { }*)cgcontext;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)readPixelsByAddressInBlock:(id /* block */)arg1;
- (void)renderCIImage:(id)arg1;

@end
