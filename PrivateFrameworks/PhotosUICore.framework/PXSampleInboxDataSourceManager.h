/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxModelTitleProvider, PXInboxProviderSource> {
    NSArray * _mockedModels;
    PXSampleInboxMediaProvider * _sampleMediaProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXInboxModelDetailViewControllerProvider> *detailViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXInboxModelMediaProvider> *mediaProvider;
@property (nonatomic, retain) NSArray *mockedModels;
@property (nonatomic, retain) PXSampleInboxMediaProvider *sampleMediaProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXInboxModelTitleProvider> *titleProvider;

- (void).cxx_destruct;
- (void)_changeData;
- (id)_dataSourceSnapshot;
- (void)_generateModels;
- (id)_modelElements;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (id)detailViewControllerProvider;
- (id)init;
- (id)mediaProvider;
- (id)mockedModels;
- (id)providerSource;
- (id)sampleMediaProvider;
- (void)setMockedModels:(id)arg1;
- (void)setSampleMediaProvider:(id)arg1;
- (id)subtitleForModel:(id)arg1 withTraitCollection:(id)arg2;
- (id)titleForModel:(id)arg1 withTraitCollection:(id)arg2;
- (id)titleProvider;

@end
