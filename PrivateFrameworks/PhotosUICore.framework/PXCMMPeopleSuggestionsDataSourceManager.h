/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager {
    long long  _loadingStatus;
}

@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSource *dataSource;
@property (nonatomic) long long loadingStatus;

- (void)cancelLoading;
- (long long)loadingStatus;
- (void)setLoadingStatus:(long long)arg1;
- (void)startLoading;

@end
