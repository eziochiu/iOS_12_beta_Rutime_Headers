/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalAlbumListGadgetProvider : PXHorizontalCollectionGadgetProvider <PXChangeObserver, PXGadgetProviderDelegate, PXSettingsKeyObserver> {
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PUSessionInfo * _sessionInfo;
    NSString * _title;
    PXExtendedTraitCollection * _traitCollection;
    unsigned long long  _type;
}

@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_fromMyMacConfiguration;
- (id)_newConfiguration;
- (id)_peoplePlacesAndMediaTypesConfiguration;
- (id)_seeAllViewController;
- (bool)_shouldShowHorizontalGadget;
- (id)dataSourceManager;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 sessionInfo:(id)arg3;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)sessionInfo;
- (void)setDataSourceManager:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)title;
- (id)traitCollection;
- (unsigned long long)type;

@end
