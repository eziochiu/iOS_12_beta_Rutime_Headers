/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUImageTile : NSObject {
    unsigned long long  _accessCount;
    NSObject<OS_dispatch_queue> * _queue;
    <NUPurgeableStorage> * _storage;
    unsigned long long  _useCount;
    bool  _wasPurged;
}

- (void).cxx_destruct;
- (bool)_decrementAccessCount;
- (bool)_decrementUseCount;
- (bool)_incrementAccessCount;
- (void)_markAsPurgeable;
- (bool)_markAsUnpurgeable;
- (void)_visitRead:(id /* block */)arg1;
- (unsigned long long)accessCount;
- (long long)copyFromTile:(id)arg1 region:(id)arg2;
- (void)dealloc;
- (bool)decrementAccessAndUseCount;
- (bool)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
- (bool)decrementAccessCount;
- (bool)decrementUseCount;
- (id)description;
- (bool)incrementAccessCount;
- (void)incrementUseCount;
- (id)initWithStorage:(id)arg1;
- (bool)isShared;
- (bool)isValid;
- (long long)readStorageInRegion:(id)arg1 block:(id /* block */)arg2;
- (void)returnToStorageFactory:(id)arg1;
- (unsigned long long)useCount;
- (long long)writeStorageInRegion:(id)arg1 block:(id /* block */)arg2;

@end
