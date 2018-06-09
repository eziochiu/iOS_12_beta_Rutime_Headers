/* made by EzioChiu.
 */

@protocol MSCLSoundBiteViewDelegate <NSObject>

@optional

- (void)soundBiteViewDidHoldRecordButton:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidReleaseRecordButton:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidToggleExplicit:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewDidTogglePlayback:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewFaceProximityDidBegin:(MSCLSoundBiteView *)arg1;
- (void)soundBiteViewFaceProximityDidEnd:(MSCLSoundBiteView *)arg1;

@end
