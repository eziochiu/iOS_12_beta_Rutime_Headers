/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {
    unsigned long long  _batchSize;
    NSCache * _cache;
    unsigned long long  _count;
    <PHBatchFetchingArrayDataSource> * _dataSource;
    NSArray * _firstBatch;
    unsigned long long  _firstBatchIndex;
    NSObject<OS_dispatch_queue> * _firstBatchQueue;
    NSArray * _oids;
    NSSet * _oidsSet;
    unsigned long long  _propertyHint;
    NSMutableDictionary * _uuidsByOIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *oids;
@property (readonly) NSSet *oidsSet;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (bool)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)__batchHelper:(unsigned long long)arg1;
- (void)_evictBatchNumber:(long long)arg1;
- (void)_invalidateUUIDCache;
- (id)_phObjectAtIndex:(unsigned long long)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned long long)_populateObjectBuffer:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_rememberUUIDsForBatch:(id)arg1;
- (unsigned long long)batchSize;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)oids;
- (id)oidsSet;
- (id)photoLibrary;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
