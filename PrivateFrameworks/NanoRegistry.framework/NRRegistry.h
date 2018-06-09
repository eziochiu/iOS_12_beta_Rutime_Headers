/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRRegistry : NSObject <NRMutableStateParentDelegate> {
    NRMutableDeviceCollection * _collection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _collectionLock;
    NSObject<OS_dispatch_queue> * _managementQueue;
    NRMutableDeviceCollection * _queueCollection;
    bool  _queueRunning;
    NRReadWriteConcurrentQueue * _readerWriterDispatch;
    NSMutableDictionary * _registryDiffObservers;
    NSMutableDictionary * _registrySecurePropertyObservers;
    NRSecureDevicePropertyStore * _secureProperties;
    bool  _supportsWatch;
}

@property (nonatomic, retain) NRMutableDeviceCollection *collection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *managementQueue;
@property (nonatomic, retain) NRMutableDeviceCollection *queueCollection;
@property (nonatomic, retain) NRSecureDevicePropertyStore *secureProperties;

+ (id)_nextToken;
+ (bool)_supportsWatch;
+ (id)getReferencedSecureProperties:(id)arg1 fromDiff:(id)arg2;
+ (id)getReferencedSecurePropertyIDsFromDiff:(id)arg1;
+ (unsigned long long)readNotifyToken:(int)arg1;
+ (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_notifyDiffObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_startQueue;
- (id)addDiffObserverWithWriteBlock:(id /* block */)arg1;
- (id)addSecurePropertiesObserverWithReadBlock:(id /* block */)arg1;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)collection;
- (void)enqueueForRead:(id /* block */)arg1;
- (void)enqueueForRead:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (void)enqueueForReadAsync:(id /* block */)arg1;
- (void)enqueueForReadAsync:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (void)enqueueForWriteAsync:(id /* block */)arg1;
- (void)enqueueForWriteAsync:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (void)grabRegistryWithReadBlock:(id /* block */)arg1;
- (void)grabRegistryWithReadBlockAsync:(id /* block */)arg1;
- (void)grabRegistryWithWriteBlockAsync:(id /* block */)arg1;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (id)managementQueue;
- (void)performUnderCollectionLock:(id /* block */)arg1;
- (id)queueCollection;
- (void)removeDiffObserver:(id)arg1;
- (void)removeSecurePropertiesObserver:(id)arg1;
- (id)secureProperties;
- (void)setCollection:(id)arg1;
- (void)setQueueCollection:(id)arg1;
- (void)setSecureProperties:(id)arg1;
- (bool)supportsWatch;
- (void)syncGrabRegistryWithReadBlock:(id /* block */)arg1;
- (void)syncGrabRegistryWithWriteBlock:(id /* block */)arg1;

@end
