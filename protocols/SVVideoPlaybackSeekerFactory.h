/* made by EzioChiu.
 */

@protocol SVVideoPlaybackSeekerFactory <NSObject>

@required

- (<SVVideoPlaybackSeeking> *)createPlaybackSeekerForVideo:(id <SVVideo>)arg1;

@end
