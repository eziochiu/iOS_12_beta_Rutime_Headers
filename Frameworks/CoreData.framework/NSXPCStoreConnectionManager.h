/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreConnectionManager : NSObject {
    NSMutableArray * _allConnections;
    NSMutableArray * _availableConnections;
    int  _connectionLock;
    unsigned long long  _maxConnections;
    NSObject<OS_dispatch_semaphore> * _poolCounter;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSXPCStore * _store;
}

@property (nonatomic, readonly) NSArray *availableConnections;
@property (nonatomic, readonly) unsigned long long maxConnections;

- (void)_checkinConnection:(id)arg1;
- (id)_checkoutConnection;
- (id)availableConnections;
- (void)dealloc;
- (void)disconnectAllConnections;
- (id)initForStore:(id)arg1;
- (unsigned long long)maxConnections;
- (void)sendMessageWithContext:(id)arg1;

@end
