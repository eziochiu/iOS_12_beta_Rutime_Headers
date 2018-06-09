/* made by EzioChiu.
 */

@protocol FBSServiceFacilityClientMessaging <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)calloutQueue;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2;
- (void)sendMessage:(void *)arg1 withType:(void *)arg2 replyHandler:(void *)arg3 waitForReply:(void *)arg4 timeout:(void *)arg5; // needs 5 arg types, found 10: FBSXPCMessage *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSXPCMessage *, void*, bool, double

@end
