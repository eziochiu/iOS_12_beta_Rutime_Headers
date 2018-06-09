/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSourceConfiguration : NSObject {
    PHCollectionList * _collectionList;
    PHFetchResult * _collectionsFetchResult;
    NSString * _description;
    long long  _indentationLevel;
    NSArray * _systemItems;
}

@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) bool shouldShowAssetCounts;
@property (nonatomic, readonly) NSArray *systemItems;

+ (id)_collectionListWithSystemItems:(id)arg1 title:(id)arg2;
+ (id)configurationWithCollectionList:(id)arg1 indentationLevel:(long long)arg2;
+ (id)libraryConfiguration;
+ (id)mediaTypesConfiguration;
+ (id)photoPickerConfiguration;

- (void).cxx_destruct;
- (id)collectionList;
- (id)collectionsFetchResult;
- (id)description;
- (long long)indentationLevel;
- (id)initWithCollectionList:(id)arg1 indentationLevel:(long long)arg2;
- (id)initWithSystemItems:(id)arg1 title:(id)arg2;
- (bool)shouldShowAssetCounts;
- (id)systemItems;

@end
