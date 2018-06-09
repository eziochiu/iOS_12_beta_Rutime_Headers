/* made by EzioChiu.
 */

@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional

- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didCancelSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didContinueSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didFinishSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didPauseSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didStartSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(AVSpeechUtterance *)arg3;

@end
