/* made by EzioChiu.
 */

@protocol TUAudioFrequencyControllerDelegate <NSObject>

@optional

- (void)frequencyController:(TUAudioFrequencyController *)arg1 frequencyChanged:(NSNumber *)arg2 forParticipantWithStreamToken:(unsigned long long)arg3;

@end
