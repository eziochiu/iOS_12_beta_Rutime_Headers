/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDatabaseCacheEntry : SSSQLiteEntity {
    SSPersistentCache * _persistentCache;
}

+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (id)dataBlob:(bool*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;
- (void)setPersistentCache:(id)arg1;

@end
