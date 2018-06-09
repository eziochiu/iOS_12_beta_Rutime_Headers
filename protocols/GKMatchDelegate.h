/* made by EzioChiu.
 */

@protocol GKMatchDelegate <NSObject>

@optional

- (void)match:(GKMatch *)arg1 didFailWithError:(NSError *)arg2;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 forRecipient:(GKPlayer *)arg3 fromRemotePlayer:(GKPlayer *)arg4;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(NSString *)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromRemotePlayer:(GKPlayer *)arg3;
- (void)match:(GKMatch *)arg1 player:(GKPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(GKMatch *)arg1 player:(NSString *)arg2 didChangeState:(long long)arg3;
- (bool)match:(GKMatch *)arg1 shouldReinviteDisconnectedPlayer:(GKPlayer *)arg2;
- (bool)match:(GKMatch *)arg1 shouldReinvitePlayer:(NSString *)arg2;

@end
