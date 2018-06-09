/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {
    bool  _hasSetInitialNavigationItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)arg1;
- (void)_locationsMenu:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_updateNavigationItem;
- (id)hostingViewController;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;

@end
