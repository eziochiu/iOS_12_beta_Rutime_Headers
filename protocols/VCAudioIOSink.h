/* made by EzioChiu.
 */

@protocol VCAudioIOSink <NSObject>

@required

- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;

@end
