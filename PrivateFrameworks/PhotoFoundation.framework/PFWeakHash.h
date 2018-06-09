/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFWeakHash : PFWeakContainer {
    unsigned long long  _capacity;
    unsigned long long  _count;
    <PFWeakHashDelegate> * _delegate;
    unsigned long long * _inUse;
    long long  _nilledWeakCount;
    bool  _objectHashing;
    id * _objects;
    NSPointerArray * _payload;
    unsigned long long  _payloadPurgeCounter;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _serializedThread;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _serializer;
}

@property <PFWeakHashDelegate> *delegate;

+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)_addObject:(id)arg1;
- (unsigned long long)_bucketForObject:(id)arg1 foundInHash:(bool*)arg2;
- (void)_doEnumeration:(id /* block */)arg1;
- (void)_dumpBuckets;
- (bool)_onSerializedThread;
- (void)_processNilledWeakReferences;
- (void)_purgeOrphanedPayloads;
- (void)_rehashWithNewCapacity:(unsigned long long)arg1;
- (bool)_removeAllObjects;
- (void)_resize;
- (void)_serialize:(id /* block */)arg1;
- (void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2;
- (bool)_shouldGrow;
- (bool)_shouldShrink;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 withPayload:(id)arg2;
- (id)allObjects;
- (unsigned long long)capacity;
- (bool)containsObject:(id)arg1;
- (unsigned long long)countByVerifyingWeakObjects;
- (unsigned long long)countEstimate;
- (void)dealloc;
- (id)delegate;
- (void)enumerateObjectsAndPayloadsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithObjectHashing;
- (id)initWithPointerHashing;
- (id)member:(id)arg1;
- (id)payloadForObject:(id)arg1;
- (void)postDelegateBecameEmptyNotice;
- (void)removeAllObjects;
- (bool)removeObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPayload:(id)arg1 forObject:(id)arg2;
- (void)weakReferenceBecameNil;

@end
