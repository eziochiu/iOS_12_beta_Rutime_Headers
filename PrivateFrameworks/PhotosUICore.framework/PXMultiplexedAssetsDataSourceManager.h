/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMultiplexedAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {
    NSArray * _assetsDataSourceManagers;
    long long  _indexOfSelectedAssetsDataSourceManager;
}

@property (nonatomic, readonly, copy) NSArray *assetsDataSourceManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexOfSelectedAssetsDataSourceManager;
@property (nonatomic, readonly) PXAssetsDataSourceManager *selectedAssetsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetsDataSourceManagers;
- (long long)indexOfSelectedAssetsDataSourceManager;
- (id)init;
- (id)initWithAssetsDataSourceManagers:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)selectedAssetsDataSourceManager;
- (void)setIndexOfSelectedAssetsDataSourceManager:(long long)arg1;

@end
