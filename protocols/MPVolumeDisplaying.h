/* made by EzioChiu.
 */

@protocol MPVolumeDisplaying <NSObject>

@optional

- (bool)isOnScreen;
- (bool)isOnScreenForVolumeDisplay;
- (NSString *)volumeAudioCategory;

@end
