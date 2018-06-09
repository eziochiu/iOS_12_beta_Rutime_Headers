/* made by EzioChiu.
 */

@protocol SSVPlaybackLeaseDelegate <NSObject>

@optional

- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFailWithError:(NSError *)arg2;
- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFinishWithResponse:(SSVPlaybackLeaseResponse *)arg2 error:(NSError *)arg3;
- (void)playbackLease:(SSVPlaybackLease *)arg1 didEndWithReasonType:(unsigned long long)arg2;
- (void)playbackLeaseAutomaticRefreshDidFinish:(SSVPlaybackLease *)arg1;
- (void)playbackLeaseDidEnd:(SSVPlaybackLease *)arg1;

@end
