/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    void * _clusterPlaylist;
    MPMediaQuery * _itemsQuery;
    NSMutableDictionary * _properties;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowsEditing;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (void)addItemWithProductID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)appendItem:(id)arg1 completion:(id /* block */)arg2;
- (void)appendItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingGeniusClusterItems;
- (bool)existsInLibrary;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (unsigned long long)mediaTypes;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)multiverseIdentifier;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)removeAllItems;
- (void)removeFirstItem;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)replaceItems:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceItemsWithPersistentIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)representativeItem;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
