/* made by EzioChiu.
 */

@protocol SVVolumeObserving <NSObject>

@optional

- (void)muteStateChanged:(id <SVVolumeProviding>)arg1;
- (void)volumeChanged:(id <SVVolumeProviding>)arg1;

@end
