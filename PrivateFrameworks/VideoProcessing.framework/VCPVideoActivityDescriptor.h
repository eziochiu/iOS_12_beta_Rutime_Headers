/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoActivityDescriptor : NSObject {
    int  _heightInMb;
    float * _motionMagnitude;
    long long * _motionMagnitudeHistogram;
    int  _widthInMb;
    float  descriptors;
}

@property (readonly) float*descriptors;

- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats { int (**x1)(); bool *x2; bool *x3; struct MotionVector {} *x4; struct MotionVector {} *x5; unsigned short *x6; unsigned short *x7; unsigned int *x8; unsigned short *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned int x20; bool x21; bool x22; int x23; int x24; }*)arg1;
- (void)dealloc;
- (float*)descriptors;
- (id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2;
- (void)reset;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)arg1;

@end
