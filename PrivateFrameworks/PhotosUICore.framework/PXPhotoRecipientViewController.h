/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoRecipientViewController : UIViewController <CNContactPickerDelegate, PXComposeRecipientViewDelegate, PXSearchRecipientControllerDelegate, UIPopoverPresentationControllerDelegate> {
    UIBarButtonItem * _addButton;
    PXComposeRecipientView * _composeRecipientView;
    CNContactPickerViewController * _contactPickerViewController;
    <PXPhotoRecipientViewControllerDelegate> * _delegate;
    NSString * _fieldLabel;
    NSString * _initialNameToQuery;
    NSArray * _layoutConstraints;
    long long  _maxRecipients;
    NSLayoutConstraint * _recipientViewHeightConstraint;
    PXRecipientSearchDataSourceManager * _searchDataSourceManager;
    PXSearchRecipientController * _searchRecipientController;
}

@property (nonatomic, retain) PXComposeRecipientView *composeRecipientView;
@property (nonatomic, retain) CNContactPickerViewController *contactPickerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotoRecipientViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fieldLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *initialNameToQuery;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, readonly) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (nonatomic, retain) PXSearchRecipientController *searchRecipientController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInitialization;
- (void)_contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)_dismissContactPickerViewController;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_presentContactPickerViewController:(id)arg1;
- (void)_updateAddButton;
- (id)composeRecipientView;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPickerViewController;
- (id)delegate;
- (id)fieldLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialNameToQuery:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialNameToQuery;
- (id)layoutConstraints;
- (long long)maxRecipients;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)searchDataSourceManager;
- (id)searchRecipientController;
- (void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)setComposeRecipientView:(id)arg1;
- (void)setContactPickerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setInitialNameToQuery:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setMaxRecipients:(long long)arg1;
- (void)setSearchRecipientController:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
