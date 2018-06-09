/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCVideoEncoderSettings : NSObject {
    unsigned short  _height;
    unsigned int  _maxBitrate;
    unsigned int  _maxFramerate;
    unsigned int  _minBitrate;
    unsigned long long  _mode;
    NSString * _name;
    unsigned int  _qpMax;
    unsigned int  _startBitrate;
    unsigned int  _targetBitrate;
    unsigned short  _width;
}

@property (nonatomic) unsigned short height;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic) unsigned int maxFramerate;
@property (nonatomic) unsigned int minBitrate;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int qpMax;
@property (nonatomic) unsigned int startBitrate;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned short width;

- (void).cxx_destruct;
- (unsigned short)height;
- (id)initWithNativeVideoCodec:(const struct VideoCodec { int x1; BOOL x2[32]; unsigned char x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned char x12; struct SimulcastStream { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned char x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; } x13[4]; struct SpatialLayer { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14[5]; int x15; bool x16; struct TimingFrameTriggerThresholds { long long x_17_1_1; unsigned short x_17_1_2; } x17; union VideoCodecUnion { struct VideoCodecVP8 { bool x_1_2_1; int x_1_2_2; int x_1_2_3; unsigned char x_1_2_4; bool x_1_2_5; bool x_1_2_6; bool x_1_2_7; bool x_1_2_8; int x_1_2_9; struct TemporalLayersFactory {} *x_1_2_10; } x_18_1_1; struct VideoCodecVP9 { int x_2_2_1; bool x_2_2_2; unsigned char x_2_2_3; bool x_2_2_4; bool x_2_2_5; int x_2_2_6; bool x_2_2_7; bool x_2_2_8; unsigned char x_2_2_9; bool x_2_2_10; } x_18_1_2; struct VideoCodecH264 { bool x_3_2_1; int x_3_2_2; char *x_3_2_3; unsigned long long x_3_2_4; char *x_3_2_5; unsigned long long x_3_2_6; int x_3_2_7; } x_18_1_3; } x18; }*)arg1;
- (unsigned int)maxBitrate;
- (unsigned int)maxFramerate;
- (unsigned int)minBitrate;
- (unsigned long long)mode;
- (id)name;
- (struct VideoCodec { int x1; BOOL x2[32]; unsigned char x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned char x12; struct SimulcastStream { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned char x_13_1_3; unsigned int x_13_1_4; unsigned int x_13_1_5; unsigned int x_13_1_6; unsigned int x_13_1_7; } x13[4]; struct SpatialLayer { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14[5]; int x15; bool x16; struct TimingFrameTriggerThresholds { long long x_17_1_1; unsigned short x_17_1_2; } x17; union VideoCodecUnion { struct VideoCodecVP8 { bool x_1_2_1; int x_1_2_2; int x_1_2_3; unsigned char x_1_2_4; bool x_1_2_5; bool x_1_2_6; bool x_1_2_7; bool x_1_2_8; int x_1_2_9; struct TemporalLayersFactory {} *x_1_2_10; } x_18_1_1; struct VideoCodecVP9 { int x_2_2_1; bool x_2_2_2; unsigned char x_2_2_3; bool x_2_2_4; bool x_2_2_5; int x_2_2_6; bool x_2_2_7; bool x_2_2_8; unsigned char x_2_2_9; bool x_2_2_10; } x_18_1_2; struct VideoCodecH264 { bool x_3_2_1; int x_3_2_2; char *x_3_2_3; unsigned long long x_3_2_4; char *x_3_2_5; unsigned long long x_3_2_6; int x_3_2_7; } x_18_1_3; } x18; })nativeVideoCodec;
- (unsigned int)qpMax;
- (void)setHeight:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setMaxFramerate:(unsigned int)arg1;
- (void)setMinBitrate:(unsigned int)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setQpMax:(unsigned int)arg1;
- (void)setStartBitrate:(unsigned int)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)setWidth:(unsigned short)arg1;
- (unsigned int)startBitrate;
- (unsigned int)targetBitrate;
- (unsigned short)width;

@end
