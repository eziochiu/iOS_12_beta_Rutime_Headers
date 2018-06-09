/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUConcurrentCache : OITSUCache {
    OITSUReadWriteQueue * mReadWriteQueue;
}

@property (nonatomic, readonly) OITSUReadWriteQueue *readWriteQueue;

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (bool)hasFlushableContent;
- (id)initWithName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)readWriteQueue;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 andWait:(bool)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unload;

@end
