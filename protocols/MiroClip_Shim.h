/* made by EzioChiu.
 */

@protocol MiroClip_Shim <NSObject>

@required

- (<MiroClip> *)copy;
- (float)frameRate;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (SpeedRanges *)speedRanges;
- (VideoMovie *)videoMovie;

@end
