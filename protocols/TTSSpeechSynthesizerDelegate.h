/* made by EzioChiu.
 */

@protocol TTSSpeechSynthesizerDelegate <NSObject>

@optional

- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(TTSSpeechRequest *)arg2;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(TTSSpeechRequest *)arg2 successfully:(bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(TTSSpeechRequest *)arg2 successfully:(bool)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(TTSSpeechRequest *)arg2;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(TTSSpeechRequest *)arg2;
- (void)speechSynthesizer:(TTSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(TTSSpeechRequest *)arg3;

@end
