/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCVPixelBuffer : NSObject {
    struct __CVBuffer { } * _CVPixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*CVPixelBuffer;

- (struct __CVBuffer { }*)CVPixelBuffer;
- (void)dealloc;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
