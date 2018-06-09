/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRRegistryClient : NRRegistry {
    unsigned long long  _backoffDuration;
    <NRNSXPCConnectionProtocol> * _connection;
    int  _devicesUpdateCounterNotifyToken_check;
    int  _devicesUpdateCounterNotifyToken_dispatch;
    NSMutableDictionary * _diffIndexObservers;
    unsigned long long  _lastDevicesUpdateCounterNotifyTokenValue;
    bool  _outstandingRegistryQuery;
    NSMutableArray * _registryQueryCompletionBlockEntries;
    unsigned long long  _tokenValue;
}

@property (nonatomic) unsigned long long backoffDuration;
@property (nonatomic, retain) <NRNSXPCConnectionProtocol> *connection;
@property (nonatomic, readonly) unsigned long long devicesUpdateCounter;
@property (nonatomic) int devicesUpdateCounterNotifyToken_check;
@property (nonatomic) int devicesUpdateCounterNotifyToken_dispatch;
@property (nonatomic) unsigned long long lastDevicesUpdateCounterNotifyTokenValue;
@property (nonatomic) bool outstandingRegistryQuery;
@property (nonatomic, readonly, retain) <NRNSXPCConnectionProtocol> *rawConnection;
@property (nonatomic, retain) NSMutableArray *registryQueryCompletionBlockEntries;
@property (nonatomic) unsigned long long tokenValue;

+ (Class)proxyClass;
+ (unsigned long long)updateCounterFromToken:(unsigned long long)arg1;
+ (Class)xpcConnectionClass;

- (void).cxx_destruct;
- (void)_addQueryCompletionBlockEntry:(id)arg1;
- (void)_connectToDaemon;
- (void)_fireAllQueryCompletionBlocks;
- (void)_fireQueryCompletionBlocksToUpdateCounter:(unsigned long long)arg1;
- (unsigned long long)_getDevicesUpdateCounterNotifyTokenValue;
- (void)_grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)_grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (void)_notifyDiffIndexObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4;
- (void)_queryDaemonWithStartingTokenValue:(unsigned long long)arg1 currentTokenValue:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)_queryDataAsyncForce:(bool)arg1 ifNeededWithBlock:(id /* block */)arg2;
- (void)_queryDataAsyncIfNeededWithBlock:(id /* block */)arg1;
- (void)_wipeRegistryWith:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)addDiffIndexObserverWithWriteBlock:(id /* block */)arg1;
- (unsigned long long)backoffDuration;
- (id)connection;
- (bool)daemonIdle;
- (unsigned long long)devicesUpdateCounter;
- (int)devicesUpdateCounterNotifyToken_check;
- (int)devicesUpdateCounterNotifyToken_dispatch;
- (void)grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)arg1;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (unsigned long long)lastDevicesUpdateCounterNotifyTokenValue;
- (bool)outstandingRegistryQuery;
- (id)rawConnection;
- (id)registryQueryCompletionBlockEntries;
- (void)removeDiffIndexObserver:(id)arg1;
- (void)setBackoffDuration:(unsigned long long)arg1;
- (void)setCollection:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDevicesUpdateCounterNotifyToken_check:(int)arg1;
- (void)setDevicesUpdateCounterNotifyToken_dispatch:(int)arg1;
- (void)setLastDevicesUpdateCounterNotifyTokenValue:(unsigned long long)arg1;
- (void)setOutstandingRegistryQuery:(bool)arg1;
- (void)setRegistryQueryCompletionBlockEntries:(id)arg1;
- (void)setTokenValue:(unsigned long long)arg1;
- (unsigned long long)tokenValue;

@end
