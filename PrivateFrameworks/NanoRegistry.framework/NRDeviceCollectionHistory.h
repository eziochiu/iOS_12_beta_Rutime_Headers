/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSFastEnumeration, NSSecureCoding> {
    bool  _atomicDirty;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NRMutableDeviceCollection * _deviceCollection;
    NSMutableArray * _history;
    NSMutableDictionary * _historyStateCache;
    NSMutableArray * _historyStateCacheIndex;
    NSMutableArray * _historyStateCacheMRU;
    long long  _maxHistoryDepth;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSMutableOrderedSet * _observers;
    unsigned long long  _startIndex;
    NRSwitchRecordCollection * _switchRecords;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NRMutableDeviceCollection *deviceCollection;
@property (nonatomic, readonly) bool dirty;
@property (nonatomic, retain) NSMutableArray *history;
@property (nonatomic, retain) NSMutableDictionary *historyStateCache;
@property (nonatomic, retain) NSMutableArray *historyStateCacheIndex;
@property (nonatomic, retain) NSMutableArray *historyStateCacheMRU;
@property (nonatomic, readonly) unsigned long long nextIndex;
@property (nonatomic, readonly) NRPBDeviceCollectionHistory *protobuf;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic, readonly) unsigned int switchIndex;
@property (nonatomic, retain) NRSwitchRecordCollection *switchRecords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createIndex;
- (unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2;
- (id)_mostRecentStateBefore:(id)arg1;
- (void)_truncateHistory;
- (void)_updateHistoryCachesWithIndex:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)applyDiff:(id)arg1;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)deviceCollection;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id*)arg2;
- (bool)dirty;
- (void)encodeWithCoder:(id)arg1;
- (id)history;
- (id)historyEntryAtIndex:(unsigned long long)arg1;
- (id)historyStateCache;
- (id)historyStateCacheIndex;
- (id)historyStateCacheMRU;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistory:(id)arg1;
- (unsigned long long)nextIndex;
- (void)notifyHistoryObserversWithEntry:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)protobuf;
- (void)pruneStateCacheItems:(unsigned long long)arg1;
- (void)purgeWorkingSet;
- (void)removeObserver:(id)arg1;
- (void)setHistory:(id)arg1;
- (void)setHistoryStateCache:(id)arg1;
- (void)setHistoryStateCacheIndex:(id)arg1;
- (void)setHistoryStateCacheMRU:(id)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (void)setSwitchRecords:(id)arg1;
- (unsigned long long)startIndex;
- (id)stateAtIndex:(unsigned long long)arg1;
- (id)switchDeviceIDFromDiff:(id)arg1;
- (unsigned int)switchIndex;
- (id)switchRecords;

@end
