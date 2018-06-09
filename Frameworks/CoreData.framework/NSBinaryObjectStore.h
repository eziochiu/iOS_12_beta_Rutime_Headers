/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBinaryObjectStore : NSMappedObjectStore

+ (id)_classesForPropertyValues;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)saveDocumentToPath:(id)arg1;
- (id)type;

@end
