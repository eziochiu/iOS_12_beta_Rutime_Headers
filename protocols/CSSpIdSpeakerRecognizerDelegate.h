/* made by EzioChiu.
 */

@protocol CSSpIdSpeakerRecognizerDelegate

@required

- (void)speakerRecognizer:(id <CSSpIdSpeakerRecognizer>)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
- (void)speakerRecognizerFinishedProcessing:(id <CSSpIdSpeakerRecognizer>)arg1 withFinalSpeakerIdInfo:(NSDictionary *)arg2;

@end
