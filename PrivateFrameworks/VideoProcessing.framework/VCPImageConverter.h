/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageConverter : NSObject {
    struct CGContext { } * _cgContext;
    int  _height;
    int  _pixelFormat;
    struct CGColorSpace { } * _rgbColorSpace;
    struct __CVBuffer { } * _rgbFrame;
    struct OpaqueVTPixelTransferSession { } * _rgbToYuv;
    int  _width;
    struct __CVPixelBufferPool { } * _yuvFrames;
}

- (int)convertImage:(struct CGImage { }*)arg1 yuvFrame:(struct __CVBuffer {}**)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPixelFormat:(int)arg1;
- (int)resize:(int)arg1 height:(int)arg2;

@end
