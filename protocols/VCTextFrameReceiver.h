/* made by EzioChiu.
 */

@protocol VCTextFrameReceiver

@required

- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[800]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int (*x15)(); void *x16; struct tagDecoderSettings {} *x17; bool x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame {} *x22; struct tagAudioFrame {} *x23; }*)arg1;

@end
