/* made by EzioChiu.
 */

@protocol MNNavigationAudioSessionDelegate <NSObject>

@required

- (void)audioSessionDidFinishAnnouncingArrival:(MNNavigationAudioSession *)arg1;
- (void)audioSessionWillAnnounceArrival:(MNNavigationAudioSession *)arg1;

@end
