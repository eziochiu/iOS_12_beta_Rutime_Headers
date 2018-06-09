/* made by EzioChiu.
 */

@protocol CSSpIdSpeakerRecognizer <NSObject>

@required

- (id)initWithContext:(CSSpIdContext *)arg1 delegate:(id <CSSpIdSpeakerRecognizerDelegate>)arg2;
- (NSDictionary *)lastSpeakerIdInfo;
- (void)processAudioChunk:(CSAudioChunk *)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (void)recordingStoppedForReason:(long long)arg1;

@end
