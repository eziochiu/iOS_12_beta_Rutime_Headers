/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionLeaseAutomaticRefreshChangeOperation : MPAsyncOperation {
    bool  _shouldAutomaticallyRefreshLease;
}

@property (nonatomic) bool shouldAutomaticallyRefreshLease;

- (void)execute;
- (void)setShouldAutomaticallyRefreshLease:(bool)arg1;
- (bool)shouldAutomaticallyRefreshLease;

@end
