/* made by EzioChiu.
 */

@protocol _TVRXVoiceRecorderDelegate <NSObject>

@optional

- (<_TVRCAudioBuffer> *)createBufferWithSettings:(NSDictionary *)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
- (void)voiceRecorder:(_TVRXVoiceRecorder *)arg1 bufferAvailable:(id <_TVRCAudioBuffer>)arg2;
- (void)voiceRecorder:(void *)arg1 isAboutToBeginRecording:(void *)arg2; // needs 2 arg types, found 6: _TVRXVoiceRecorder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voidRecorderDidStop:(_TVRXVoiceRecorder *)arg1;

@end
