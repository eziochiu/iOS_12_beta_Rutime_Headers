/* made by EzioChiu.
 */

@protocol SVPlaybackCoordinatorFactory <NSObject>

@required

- (SVPlaybackCoordinator *)createPlaybackCoordinatorForVideo:(id <SVVideo>)arg1;

@end
