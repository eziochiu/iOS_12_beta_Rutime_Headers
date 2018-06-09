/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPModifyFavoritesOperation : FPActionOperation {
    bool  _isUnfavorite;
    NSArray * _items;
    NSArray * _ranks;
}

- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(bool)arg3;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2;
- (id)initWithItemsToUnfavorite:(id)arg1;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end
