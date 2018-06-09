/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupDisambiguationViewControllerDelegate> {
    NSArray * _pendingCameraCaptureObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cameraCaptureCancelButtonPressed:(id)arg1;
- (void)_captureFromCamera:(id)arg1;
- (void)_dismissCameraCaptureViewController:(id)arg1;
- (void)_performDisambiguationWithCompletion:(id /* block */)arg1;
- (void)_performInlineSecondaryWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)_performSecondaryWithCompletion:(id /* block */)arg1;
- (void)_processPendingCameraCaptureObjects;
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(id /* block */)arg1;
- (bool)_shouldUseInlineSecondaryProvisioningFlow;
- (void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraCaptureViewControllerDidFail:(id)arg1;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)disambiguationViewControllerSetupLater:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)readonlyFieldIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateFieldsModelWithCameraCaptureObjects:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
