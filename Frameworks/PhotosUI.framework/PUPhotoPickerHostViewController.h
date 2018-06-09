/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerHostViewController : _UIRemoteViewController <PUPhotoPickerActionHandler, PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler> {
    bool  __invalidated;
    long long  _actionType;
    NSString * _actionTypeDescription;
    <PUPhotoPickerHostViewControllerDelegate> * _delegate;
    bool  _didUpdateAppearance;
    NSExtensionContext * _hostExtensionContext;
    PUPhotoPickerAppearance * _photoPickerAppearance;
    PUPhotoPickerAppearance * _previousPhotoPickerAppearance;
    long long  _secondaryActionType;
}

@property (getter=_isInvalidated, nonatomic) bool _invalidated;
@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *actionTypeDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didUpdateAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSExtensionContext *hostExtensionContext;
@property (nonatomic, readonly) <PUPhotoPickerHostService> *hostProxy;
@property (nonatomic, retain) PUPhotoPickerAppearance *photoPickerAppearance;
@property (nonatomic, retain) PUPhotoPickerAppearance *previousPhotoPickerAppearance;
@property (nonatomic) long long secondaryActionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_barButtonItemForActionType:(long long)arg1;
- (id)_hostContext;
- (void)_invalidateIfNeeded;
- (bool)_isInvalidated;
- (void)_setLeftBarButtonItemForActionType:(long long)arg1;
- (void)_setRightBarButtonItemForActionType:(long long)arg1;
- (long long)actionType;
- (id)actionTypeDescription;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)didUpdateAppearance;
- (id)hostExtensionContext;
- (id)hostProxy;
- (void)invalidate;
- (void)performApperanceUpdateUsing:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateWithCompletion:(id /* block */)arg1;
- (id)photoPickerAppearance;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (id)previousPhotoPickerAppearance;
- (void)promptDidChange:(id)arg1;
- (long long)secondaryActionType;
- (void)setActionType:(long long)arg1;
- (void)setActionTypeDescription:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidUpdateAppearance:(bool)arg1;
- (void)setHostExtensionContext:(id)arg1;
- (void)setPhotoPickerAppearance:(id)arg1;
- (void)setPreviousPhotoPickerAppearance:(id)arg1;
- (void)setSecondaryActionType:(long long)arg1;
- (void)set_invalidated:(bool)arg1;
- (void)tapBack:(id)arg1;
- (void)tapCancel:(id)arg1;
- (void)tapDone:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
