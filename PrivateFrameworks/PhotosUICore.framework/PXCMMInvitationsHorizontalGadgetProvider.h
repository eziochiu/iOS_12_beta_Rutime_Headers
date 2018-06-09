/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXCMMInvitationsDataSourceManager * _dataSourceManager;
    bool  _didGenerateGadgets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDataSourceManager;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void)loadDataForGadgets;
- (void)navigateToCMMInvitationWithUUID:(id)arg1 animated:(bool)arg2 presentShareActionView:(bool)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
