/* made by EzioChiu.
 */

@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>

@required

- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__createViewController:(void *)arg1 withAppearanceSerializedRepresentations:(void *)arg2 legacyAppearance:(void *)arg3 hostAccessibilityServerPort:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 15: NSString *, NSArray *, bool, BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, NSArray *, long long, int, BSMachPortSendRight *, NSError *, void*
- (void)__createViewController:(void *)arg1 withContextToken:(void *)arg2 fbsDisplays:(void *)arg3 appearanceSerializedRepresentations:(void *)arg4 legacyAppearance:(void *)arg5 traitCollection:(void *)arg6 initialInterfaceOrientation:(void *)arg7 hostAccessibilityServerPort:(void *)arg8 replyHandler:(void *)arg9; // needs 9 arg types, found 19: NSString *, NSUUID *, NSArray *, NSArray *, bool, UITraitCollection *, long long, BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, NSArray *, long long, int, BSMachPortSendRight *, NSError *, void*
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 8: BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSMachPortSendRight *, NSError *, void*
- (void)__hostDidAttachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidBecomeActive;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidDetachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)__hostDidSetPresentationControllerClassName:(NSString *)arg1 canShowTextServices:(bool)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(NSArray *)arg1 originalSource:(id)arg2 legacyAppearance:(bool)arg3;
- (void)__hostDidUpdateDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDisablesAutomaticKeyboardBehavior:(bool)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(bool)arg1;
- (void)__hostViewDidDisappear:(bool)arg1;
- (void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(void *)arg1 newHostingHandleReplyHandler:(void *)arg2; // needs 2 arg types, found 7: FBSDisplayIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, void*
- (void)__hostViewWillAppear:(void *)arg1 inInterfaceOrientation:(void *)arg2 traitCollection:(void *)arg3 statusBarHeight:(void *)arg4 underlapsStatusBar:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: bool, long long, UITraitCollection *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostViewWillTransitionToSize:(void *)arg1 withContextDescription:(void *)arg2 boundingPath:(void *)arg3 statusBarHeight:(void *)arg4 underlapsStatusBar:(void *)arg5 whenDone:(void *)arg6; // needs 6 arg types, found 12: struct CGSize { double x1; double x2; }, _UIViewControllerTransitionCoordinatorContextDescription *, _UIBoundingPath *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, double, void*
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillResignActive;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillTransitionToTraitCollection:(UITraitCollection *)arg1 withContextDescription:(_UIViewControllerTransitionCoordinatorContextDescription *)arg2 deferIfAnimated:(bool)arg3;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2;
- (void)__saveStateForSession:(void *)arg1 restorationAnchor:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)__scrollToTopFromTouchAtViewLocation:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)__setBoundingPath:(_UIBoundingPath *)arg1;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(_UIBoundingPath *)arg2;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(_UIBoundingPath *)arg2 withFence:(BKSAnimationFenceHandle *)arg3;
- (void)__setHostTintColor:(UIColor *)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(UITraitCollection *)arg1 deferIfAnimated:(bool)arg2;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (void)__setServiceInPopover:(bool)arg1;
- (void)__textServiceDidDismiss;
- (void)__undoActionWithToken:(long long)arg1;

@end
