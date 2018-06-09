/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCEncodedImage : NSObject {
    NSData * _buffer;
    long long  _captureTimeMs;
    bool  _completeFrame;
    unsigned long long  _contentType;
    long long  _encodeFinishMs;
    long long  _encodeStartMs;
    int  _encodedHeight;
    int  _encodedWidth;
    unsigned char  _flags;
    unsigned long long  _frameType;
    long long  _ntpTimeMs;
    NSNumber * _qp;
    long long  _rotation;
    unsigned int  _timeStamp;
}

@property (nonatomic, retain) NSData *buffer;
@property (nonatomic) long long captureTimeMs;
@property (nonatomic) bool completeFrame;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) long long encodeFinishMs;
@property (nonatomic) long long encodeStartMs;
@property (nonatomic) int encodedHeight;
@property (nonatomic) int encodedWidth;
@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) long long ntpTimeMs;
@property (nonatomic, retain) NSNumber *qp;
@property (nonatomic) long long rotation;
@property (nonatomic) unsigned int timeStamp;

- (void).cxx_destruct;
- (id)buffer;
- (long long)captureTimeMs;
- (bool)completeFrame;
- (unsigned long long)contentType;
- (long long)encodeFinishMs;
- (long long)encodeStartMs;
- (int)encodedHeight;
- (int)encodedWidth;
- (unsigned char)flags;
- (unsigned long long)frameType;
- (id)initWithNativeEncodedImage:(struct EncodedImage { unsigned int x1; unsigned int x2; unsigned int x3; long long x4; long long x5; int x6; char *x7; unsigned long long x8; unsigned long long x9; int x10; unsigned char x11; bool x12; int x13; struct PlayoutDelay { int x_14_1_1; int x_14_1_2; } x14; struct Timing { unsigned char x_15_1_1; long long x_15_1_2; long long x_15_1_3; long long x_15_1_4; long long x_15_1_5; long long x_15_1_6; long long x_15_1_7; long long x_15_1_8; long long x_15_1_9; } x15; })arg1;
- (struct EncodedImage { unsigned int x1; unsigned int x2; unsigned int x3; long long x4; long long x5; int x6; char *x7; unsigned long long x8; unsigned long long x9; int x10; unsigned char x11; bool x12; int x13; struct PlayoutDelay { int x_14_1_1; int x_14_1_2; } x14; struct Timing { unsigned char x_15_1_1; long long x_15_1_2; long long x_15_1_3; long long x_15_1_4; long long x_15_1_5; long long x_15_1_6; long long x_15_1_7; long long x_15_1_8; long long x_15_1_9; } x15; })nativeEncodedImage;
- (long long)ntpTimeMs;
- (id)qp;
- (long long)rotation;
- (void)setBuffer:(id)arg1;
- (void)setCaptureTimeMs:(long long)arg1;
- (void)setCompleteFrame:(bool)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setEncodeFinishMs:(long long)arg1;
- (void)setEncodeStartMs:(long long)arg1;
- (void)setEncodedHeight:(int)arg1;
- (void)setEncodedWidth:(int)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setFrameType:(unsigned long long)arg1;
- (void)setNtpTimeMs:(long long)arg1;
- (void)setQp:(id)arg1;
- (void)setRotation:(long long)arg1;
- (void)setTimeStamp:(unsigned int)arg1;
- (unsigned int)timeStamp;

@end
