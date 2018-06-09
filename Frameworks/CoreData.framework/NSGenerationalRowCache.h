/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSGenerationalRowCache : NSObject {
    int  _lock;
    NSPersistentStoreCache * _primaryCache;
    NSMutableDictionary * _rowCachesByGenerationToken;
    NSPersistentStore * _store;
}

- (void)dealloc;
- (void)forgetAllExternalData;
- (id)initWithStore:(id)arg1;
- (void)removeRowCacheForGeneration:(id)arg1;
- (void)removeRowCacheForGenerationWithIdentifier:(id)arg1;
- (id)rowCacheForGeneration:(id)arg1;

@end
