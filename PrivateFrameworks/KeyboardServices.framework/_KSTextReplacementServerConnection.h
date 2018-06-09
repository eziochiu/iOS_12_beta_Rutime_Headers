/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementServerConnection : NSObject <_KSTextReplacementServiceProtocol> {
    NSXPCConnection * _serviceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceConnection;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(id /* block */)arg3;
- (void)cancelPendingUpdatesWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(id /* block */)arg2;
- (void)removeAllEntries;
- (void)requestSyncWithReply:(id /* block */)arg1;
- (id)textReplacementEntries;

@end