/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerAbstractStack : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  mRWLock;
}

- (unsigned long long)count;
- (void)dealloc;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (void)lockForRead;
- (void)lockForWrite;
- (id)lookupStrokeAtIndex:(long long)arg1;
- (id)p_strokeLayerEnumeration;
- (id)portalledStrokeLayer;
- (void)unlock;

@end
