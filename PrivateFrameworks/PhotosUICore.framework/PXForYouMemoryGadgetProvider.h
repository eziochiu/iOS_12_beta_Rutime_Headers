/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver> {
    PXMemoriesFeedWidgetDataSourceManager * _dataSourceManager;
    bool  _hasGeneratedGadgets;
}

@property (nonatomic, retain) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasGeneratedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)maxMemoriesToFetch;

- (void).cxx_destruct;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (bool)hasGeneratedGadgets;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSourceManager:(id)arg1;
- (void)setHasGeneratedGadgets:(bool)arg1;

@end
