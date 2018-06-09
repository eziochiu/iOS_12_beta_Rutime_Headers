/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Collection : ML3Entity

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (bool)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (id)artworkCacheIDProperty;
+ (bool)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)collectionEntityClasses;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (bool)libraryContentsChangeForProperty:(id)arg1;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (bool)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)trackForeignPersistentID;
+ (bool)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateTrackValues:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)propertyForMPMediaEntityProperty:(id)arg1;

@end
