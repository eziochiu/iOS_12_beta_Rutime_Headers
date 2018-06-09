/* made by EzioChiu.
 */

@protocol VCVideoCaptureConverterDelegate <NSObject>

@required

- (void)converter:(VCVideoCaptureConverter *)arg1 didConvertFrame:(struct opaqueCMSampleBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 droppedFrames:(int)arg4 cameraStatusBits:(unsigned char)arg5;

@end
