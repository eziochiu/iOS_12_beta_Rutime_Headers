/* made by EzioChiu.
 */

@protocol VCAudioIOControllerSink <NSObject>

@required

- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1 controllerTime:(const struct _VCAudioIOControllerTime { unsigned int x1; unsigned long long x2; }*)arg2;

@end
