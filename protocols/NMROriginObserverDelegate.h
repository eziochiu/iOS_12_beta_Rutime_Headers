/* made by EzioChiu.
 */

@protocol NMROriginObserverDelegate <NSObject>

@optional

- (void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(NMROrigin *)arg2;
- (void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(NMROrigin *)arg2;

@end
