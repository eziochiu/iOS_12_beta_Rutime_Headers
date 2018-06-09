/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDatabaseCache : NSObject {
    Class  _cacheEntryClass;
    NSString * _cacheName;
    SSSQLiteDatabase * _database;
    NSString * _identifier;
    unsigned long long  _maximumInlineBlobSize;
    NSString * _path;
    SSPersistentCache * _persistentCache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) unsigned long long maximumInlineBlobSize;

- (bool)_setupDatabase;
- (id)cacheEntryForLookupKey:(id)arg1;
- (id)cacheEntryProperties:(id)arg1 forLookupKeys:(id)arg2;
- (void)clear;
- (void)clearCacheForLookupKey:(id)arg1;
- (int)clearRetiredData;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2 database:(id)arg3 cacheEntryClass:(Class)arg4;
- (unsigned long long)maximumInlineBlobSize;
- (id)setData:(id)arg1 expiring:(double)arg2 retiring:(double)arg3 lookupKey:(id)arg4 userInfo:(id)arg5;
- (void)setMaximumInlineBlobSize:(unsigned long long)arg1;
- (id)statistics;

@end
