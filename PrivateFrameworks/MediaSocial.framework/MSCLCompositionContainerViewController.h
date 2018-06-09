/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLCompositionContainerViewController : SKUIViewController <MSCLComposePostViewControllerDelegate, SKUIModalDocumentViewController> {
    UIBarButtonItem * _cancelButtonItem;
    MSCLComposePostViewController * _composePostViewController;
    MSCLConfiguration * _configuration;
    <MSCLComposePostDelegate> * _delegate;
    MSCLStoreItem * _item;
    MSCLLoadConfigurationOperation * _loadConfigurationOperation;
    <SKUIModalDocumentController> * _modalDocumentController;
    UINavigationController * _navigationController;
    NSMutableArray * _pendingAttachments;
    UIBarButtonItem * _shareButtonItem;
}

@property (nonatomic, readonly, copy) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MSCLStoreItem *item;
@property (nonatomic) <SKUIModalDocumentController> *modalDocumentController;
@property (nonatomic, readonly) bool needsNavigationDocument;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPendingAttachments;
- (void)_cancelButtonAction:(id)arg1;
- (id)_composePostViewController;
- (void)_dismissWithResult:(long long)arg1;
- (void)_finishLoadWithConfiguration:(id)arg1 clientContext:(id)arg2 error:(id)arg3;
- (id)_newLoadingViewController;
- (void)_reloadNavigationItemForViewController:(id)arg1 animated:(bool)arg2;
- (void)_sendLoadDidFailWithError:(id)arg1;
- (void)_shareButtonAction:(id)arg1;
- (void)addAttachments:(id)arg1;
- (void)composePostViewController:(id)arg1 contentDidChange:(bool)arg2;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)item;
- (void)loadView;
- (id)modalDocumentController;
- (bool)needsNavigationDocument;
- (long long)preferredStatusBarStyle;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setModalDocumentController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
