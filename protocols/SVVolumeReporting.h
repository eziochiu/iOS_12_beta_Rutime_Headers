/* made by EzioChiu.
 */

@protocol SVVolumeReporting <NSObject>

@required

- (bool)muted;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
