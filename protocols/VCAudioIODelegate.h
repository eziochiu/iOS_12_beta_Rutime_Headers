/* made by EzioChiu.
 */

@protocol VCAudioIODelegate <NSObject>

@required

- (void)didResumeAudioIO:(VCAudioIO *)arg1;
- (void)didSuspendAudioIO:(VCAudioIO *)arg1;

@end
