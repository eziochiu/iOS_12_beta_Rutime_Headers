/* made by EzioChiu.
 */

@protocol CSSpeechManagerDelegate <NSObject>

@required

- (void)speechManagerDidStartForwarding:(CSSpeechManager *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)speechManagerDidStopForwarding:(CSSpeechManager *)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(CSSpeechManager *)arg1 chunk:(CSAudioChunk *)arg2;
- (void)speechManagerRecordBufferAvailable:(CSSpeechManager *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional

- (void)speechManager:(CSSpeechManager *)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)speechManager:(CSSpeechManager *)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechManagerDetectedSystemVolumeChange:(CSSpeechManager *)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3;
- (void)speechManagerEndRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerRecordHardwareConfigurationDidChange:(CSSpeechManager *)arg1 toConfiguration:(long long)arg2;
- (NSDictionary *)speechManagerRecordingContext;

@end
