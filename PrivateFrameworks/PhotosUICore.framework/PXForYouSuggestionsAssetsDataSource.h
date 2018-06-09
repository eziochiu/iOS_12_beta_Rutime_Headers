/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {
    NSArray * _assets;
    PXForYouSuggestionAssetCollection * _collection;
    NSString * _collectionTitle;
}

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, copy) NSString *collectionTitle;

+ (id)new;

- (void).cxx_destruct;
- (id)assets;
- (id)collectionTitle;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForAssetReference:(id)arg1;
- (id)init;
- (id)initWithDisplayAssets:(id)arg1 collectionTitle:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setAssets:(id)arg1;
- (void)setCollectionTitle:(id)arg1;

@end
