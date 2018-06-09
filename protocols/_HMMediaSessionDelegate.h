/* made by EzioChiu.
 */

@protocol _HMMediaSessionDelegate <NSObject>

@required

- (void)mediaSession:(_HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(_HMMediaSession *)arg1 didUpdateRouteUID:(NSString *)arg2;

@end
