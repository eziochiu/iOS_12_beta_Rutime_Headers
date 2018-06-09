/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredShuffledAlbum : PLShuffledAlbum {
    int  _filter;
    NSPredicate * _filterPredicate;
}

@property (nonatomic, readonly) int filter;
@property (nonatomic, readonly, retain) NSPredicate *filterPredicate;

+ (struct NSObject { Class x1; }*)_shuffledAlbumWithAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 startingAsset:(id)arg3;

- (unsigned long long)count;
- (void)createShuffledIndexesMaps;
- (void)dealloc;
- (int)filter;
- (id)filterPredicate;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 startingAsset:(id)arg3;
- (struct NSObject { Class x1; }*)unshuffledAlbum;

@end
