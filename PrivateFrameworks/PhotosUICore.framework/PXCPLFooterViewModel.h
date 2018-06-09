/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLFooterViewModel : PXPhotosGlobalFooterViewModel <PXAssetsDataSourceManagerObserver, PXCPLServiceUIDelegate, PXCloudQuotaControllerDelegate> {
    PXPhotoKitAssetsDataSourceManager * _assetsDataSourceManager;
    PXCloudQuotaController * _cloudQuotaController;
    unsigned long long  _otherCount;
    unsigned long long  _photoCount;
    PXCPLServiceUI * _serviceUI;
    NSArray * _syncProgressAlbums;
    unsigned long long  _videoCount;
}

@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateServiceUI;
- (void)_updateTitle;
- (id)assetsDataSourceManager;
- (void)cloudQuotaController:(id)arg1 presentInformationBanner:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (bool)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 progressDidChange:(double)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;

@end
