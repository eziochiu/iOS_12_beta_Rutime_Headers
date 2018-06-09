/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMFooterViewModel : PXPhotosGlobalFooterViewModel <PXChangeObserver> {
    <PXCMMFooterViewModelActionDelegate> * _actionDelegate;
    PXCMMAssetsProgressListener * _assetsProgressListener;
}

@property (nonatomic) <PXCMMFooterViewModelActionDelegate> *actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_trashMomentShare;
- (void)_updateAllProperties;
- (id)actionDelegate;
- (id)init;
- (id)initWithProgressListener:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setActionDelegate:(id)arg1;

@end
