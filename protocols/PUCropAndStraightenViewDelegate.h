/* made by EzioChiu.
 */

@protocol PUCropAndStraightenViewDelegate <NSObject>

@required

- (void)cropAndStraightenViewDidEndTracking:(PUCropAndStraightenView *)arg1;
- (void)cropAndStraightenViewDidTrack:(PUCropAndStraightenView *)arg1;
- (void)cropAndStraightenViewWillBeginTracking:(PUCropAndStraightenView *)arg1;

@end
