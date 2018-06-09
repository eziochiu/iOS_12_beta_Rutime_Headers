/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAddSubscribersViewController : UIViewController {
    UIBarButtonItem * _addButton;
    PLCloudSharedAlbum * _album;
    PUPhotoStreamRecipientViewController * _composeRecipientController;
}

@property (nonatomic, readonly) PLCloudSharedAlbum *album;

- (void).cxx_destruct;
- (void)_addButtonHandler;
- (void)_cancelButtonHandler;
- (void)_dismiss;
- (void)_keyboardWillShow:(id)arg1;
- (void)_saveAndDismiss;
- (bool)_validateRecipientsToAdd:(id)arg1;
- (id)album;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithSharedStream:(id)arg1;
- (void)loadView;
- (void)recipientViewController:(id)arg1 didEnterText:(id)arg2;
- (void)recipientViewControllerDidAddRecipient:(id)arg1;
- (void)recipientViewControllerDidRemoveRecipient:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end