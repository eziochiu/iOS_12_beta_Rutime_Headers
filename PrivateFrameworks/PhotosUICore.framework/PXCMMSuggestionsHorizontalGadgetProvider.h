/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXCMMSuggestionsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
    <PXGadgetNavigating> * _gadgetNavigator;
    id /* block */  _pendingNavigationBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXGadgetNavigating> *gadgetNavigator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDataSourceManager;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)gadgetNavigator;
- (void)generateGadgets;
- (id)init;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setGadgetNavigator:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
