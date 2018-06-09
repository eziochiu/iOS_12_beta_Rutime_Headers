/* made by EzioChiu.
 */

@protocol HFMediaValueSource <NSObject>

@required

- (NSError *)cachedPlaybackStateWriteError;
- (bool)hasPendingWrites;
- (long long)lastPlaybackStateForProfile;
- (<HFMediaProfileContainer> *)mediaProfileContainer;
- (NAFuture *)writePlaybackState:(long long)arg1;

@end
