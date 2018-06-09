/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCRawImage : NSObject {
    long long  _bytesPerPixel;
    char * _data;
    long long  _height;
    struct CGImage { } * _imageRef;
    long long  _width;
}

@property (nonatomic) long long bytesPerPixel;
@property (nonatomic) char *data;
@property (nonatomic) long long height;
@property (nonatomic, retain) struct CGImage { }*imageRef;
@property (nonatomic) long long width;

+ (id)rawImageForImage:(struct CGImage { }*)arg1;

- (long long)bytesPerPixel;
- (char *)data;
- (void)dealloc;
- (long long)height;
- (struct CGImage { }*)imageRef;
- (void)setBytesPerPixel:(long long)arg1;
- (void)setData:(char *)arg1;
- (void)setHeight:(long long)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
