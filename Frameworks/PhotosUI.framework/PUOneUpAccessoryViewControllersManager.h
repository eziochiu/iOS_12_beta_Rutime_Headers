/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate> {
    NSMapTable * __accessoryViewControllers;
    PUBrowsingSession * _browsingSession;
    <PUOneUpAccessoryViewControllersManagerDelegate> * _delegate;
    struct { 
        bool preventRevealInMomentActionForAssetReference; 
        bool requestDismissal; 
    }  _delegateRepondsTo;
    id /* block */  _unlockDeviceHandler;
    id /* block */  _unlockDeviceStatus;
}

@property (nonatomic, readonly) NSMapTable *_accessoryViewControllers;
@property (nonatomic, readonly) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpAccessoryViewControllersManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unlockDeviceHandler;
@property (nonatomic, copy) id /* block */ unlockDeviceStatus;

- (void).cxx_destruct;
- (id)_accessoryViewControllers;
- (long long)_accessoryViewTypeForAsset:(id)arg1;
- (id)_createAccessoryViewControllerForAssetReference:(id)arg1;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(bool)arg2;
- (long long)accessoryViewTypeForAsset:(id)arg1;
- (id)assetReferenceForAccessoryViewController:(id)arg1;
- (id)browsingSession;
- (id)delegate;
- (id)init;
- (id)initWithBrowsingSession:(id)arg1;
- (bool)photosDetailsUIViewControllerRequestDismissal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUnlockDeviceHandler:(id /* block */)arg1;
- (void)setUnlockDeviceStatus:(id /* block */)arg1;
- (bool)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1;
- (id /* block */)unlockDeviceHandler;
- (id /* block */)unlockDeviceStatus;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
