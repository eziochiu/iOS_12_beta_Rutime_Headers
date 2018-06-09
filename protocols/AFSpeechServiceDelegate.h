/* made by EzioChiu.
 */

@protocol AFSpeechServiceDelegate <NSObject>

@required

- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(NSDictionary *)arg1 error:(NSError *)arg2;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;

@end
