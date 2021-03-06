/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCVideoFrame : NSObject {
    <RTCVideoFrameBuffer> * _buffer;
    long long  _rotation;
    long long  _timeStampNs;
    int  timeStamp;
}

@property (nonatomic, readonly) <RTCVideoFrameBuffer> *buffer;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) long long rotation;
@property (nonatomic) int timeStamp;
@property (nonatomic, readonly) long long timeStampNs;
@property (nonatomic, readonly) int width;

- (void).cxx_destruct;
- (id)buffer;
- (int)height;
- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithNativeVideoFrame:(const struct VideoFrame { struct scoped_refptr<webrtc::VideoFrameBuffer> { struct VideoFrameBuffer {} *x_1_1_1; } x1; unsigned int x2; long long x3; long long x4; int x5; }*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;
- (struct VideoFrame { struct scoped_refptr<webrtc::VideoFrameBuffer> { struct VideoFrameBuffer {} *x_1_1_1; } x1; unsigned int x2; long long x3; long long x4; int x5; })nativeVideoFrame;
- (id)newI420VideoFrame;
- (long long)rotation;
- (void)setTimeStamp:(int)arg1;
- (int)timeStamp;
- (long long)timeStampNs;
- (int)width;

@end
