/* made by EzioChiu.
 */

@protocol AFClientConfigurationMutating <NSObject>

@required

- (void)setIsDeviceInCarDNDMode:(bool)arg1;
- (void)setIsDeviceInSetupFlow:(bool)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;
- (void)setTwoShotAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1;

@end
