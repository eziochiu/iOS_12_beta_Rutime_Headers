/* made by EzioChiu.
 */

@protocol PLAlbumContainer <PLAssetContainerList>

@required

- (NSString *)_prettyDescription;
- (NSString *)_typeDescription;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (NSMutableOrderedSet *)albums;
- (unsigned long long)albumsCount;
- (id /* block */)albumsSortingComparator:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL
- (bool)canEditAlbums;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (NSNumber *)identifier;
- (bool)isFolder;
- (bool)needsReordering;
- (void)preheatAlbumsAtIndexes:(NSIndexSet *)arg1 forProperties:(NSArray *)arg2 relationships:(NSArray *)arg3;
- (void)preheatAlbumsForProperties:(NSArray *)arg1 relationships:(NSArray *)arg2;
- (void)setNeedsReordering;
- (unsigned long long)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end
