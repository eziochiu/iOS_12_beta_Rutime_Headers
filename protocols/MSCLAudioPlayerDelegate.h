/* made by EzioChiu.
 */

@protocol MSCLAudioPlayerDelegate <NSObject>

@optional

- (void)audioPlayer:(MSCLAudioPlayer *)arg1 didChangeStatus:(MSCLAudioPlayerStatus *)arg2;
- (void)audioPlayer:(MSCLAudioPlayer *)arg1 didFailWithError:(NSError *)arg2;

@end
