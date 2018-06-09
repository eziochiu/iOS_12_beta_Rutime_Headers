/* made by EzioChiu.
 */

@protocol ICMusicSubscriptionLeaseSessionDelegate <NSObject>

@required

- (void)musicLeaseSession:(void *)arg1 didFinishPlaybackRequest:(void *)arg2 withPlaybackResponse:(void *)arg3 responseError:(void *)arg4 updatedFairPlayKeyStatusList:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: ICMusicSubscriptionLeaseSession *, ICMusicSubscriptionLeasePlaybackRequest *, ICMusicSubscriptionPlaybackResponse *, NSError *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICMusicSubscriptionLeaseStatus *, NSDate *, void*
- (void)musicLeaseSession:(void *)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(void *)arg2; // needs 2 arg types, found 8: ICMusicSubscriptionLeaseSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICMusicSubscriptionLeaseStatus *, NSError *, void*

@end
