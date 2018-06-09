/* made by EzioChiu.
 */

@protocol CKAudioPlayerDelegate <NSObject>

@required

- (void)audioPlayerCurrentTimeDidChange:(CKAudioPlayer *)arg1;

@optional

- (void)audioPlayerDidPrepareAudioToPlay:(CKAudioPlayer *)arg1 successfully:(bool)arg2;

@end
