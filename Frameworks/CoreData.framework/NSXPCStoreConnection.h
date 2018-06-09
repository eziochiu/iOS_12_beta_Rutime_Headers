/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreConnection : NSObject {
    NSXPCConnection * _connection;
    NSXPCStore * _store;
}

- (id)createConnectionWithOptions:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)initForStore:(id)arg1;
- (void)reconnect;
- (id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (void)sendMessageWithContext:(id)arg1;

@end
