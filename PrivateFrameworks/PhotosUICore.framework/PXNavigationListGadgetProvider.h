/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXChangeObserver> {
    PXNavigationListDataSourceManager * _dataSourceManager;
    bool  _shouldShowNavigationListOnIpad;
    PXExtendedTraitCollection * _traitCollection;
    unsigned long long  _type;
}

@property (nonatomic, retain) PXNavigationListDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldShowNavigationListOnIpad;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)_shouldShowNavigationList;
- (id)dataSourceManager;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSourceManager:(id)arg1;
- (void)setShouldShowNavigationListOnIpad:(bool)arg1;
- (bool)shouldShowNavigationListOnIpad;
- (id)traitCollection;
- (unsigned long long)type;

@end
