/* made by EzioChiu.
 */

@protocol CSSpIdSpeakerVectorGeneratorDelegate <NSObject>

@optional

- (void)speakerVectorGenerator:(CSSpIdSpeakerVectorGenerator *)arg1 finishedWithFinalSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)speakerVectorGenerator:(CSSpIdSpeakerVectorGenerator *)arg1 hasSpeakerVector:(NSData *)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;

@end
