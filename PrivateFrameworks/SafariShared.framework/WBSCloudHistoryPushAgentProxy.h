/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent> {
    NSXPCConnection * _agentConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)dealloc;
- (void)getPushNotifications:(id /* block */)arg1;
- (id)init;
- (void)queryMemoryFootprint:(id /* block */)arg1;
- (id)queryMemoryFootprintWithError:(id*)arg1;

@end
