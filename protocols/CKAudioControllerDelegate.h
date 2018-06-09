/* made by EzioChiu.
 */

@protocol CKAudioControllerDelegate <NSObject>

@optional

- (void)audioController:(CKAudioController *)arg1 didPrepareMediaObjectToPlay:(CKMediaObject *)arg2 successfully:(bool)arg3;
- (void)audioController:(CKAudioController *)arg1 mediaObjectDidFinishPlaying:(CKMediaObject *)arg2;
- (void)audioController:(CKAudioController *)arg1 mediaObjectProgressDidChange:(CKMediaObject *)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(CKAudioController *)arg1;
- (void)audioControllerDidStop:(CKAudioController *)arg1;
- (void)audioControllerPlayingDidChange:(CKAudioController *)arg1;

@end
