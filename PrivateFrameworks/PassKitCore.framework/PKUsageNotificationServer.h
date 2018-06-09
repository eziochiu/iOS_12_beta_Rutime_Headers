/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKUsageNotificationServer : PDXPCService <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initializeUsageNotificationServer;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2;

@end
