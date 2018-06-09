/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate> {
    bool  _allowsMultipleSelection;
    UIViewController * _childViewController;
    DOCConfiguration * _configuration;
    <UIDocumentPickerDelegate> * _delegate;
    unsigned long long  _documentPickerMode;
    bool  _ignoreApplicationEntitlementForImport;
    NSMutableArray * _securityScopedURLs;
    bool  _sourceIsManaged;
    NSArray * _uploadURLs;
    <UIDocumentPickerDelegate> * _weak_delegate;
}

@property (getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:, nonatomic) bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, retain) NSMutableArray *_securityScopedURLs;
@property (nonatomic) bool allowsMultipleSelection;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) UIViewController *childViewController;
@property (nonatomic, retain) DOCConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (getter=_sourceIsManaged, setter=_setSourceIsManaged:, nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *uploadURLs;

- (void).cxx_destruct;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1;
- (id)_childViewController;
- (void)_commonInitWithDocumentTypes:(id)arg1;
- (void)_consumeSandboxExtensionForURL:(id)arg1;
- (void)_didTapCancel;
- (bool)_ignoreApplicationEntitlementForImport;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;
- (id)_securityScopedURLs;
- (void)_setChildViewController:(id)arg1;
- (void)_setIgnoreApplicationEntitlementForImport:(bool)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (bool)_sourceIsManaged;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (bool)allowsMultipleSelection;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2;
- (void)documentManagerWasCancelled:(id)arg1;
- (unsigned long long)documentPickerMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setUploadURLs:(id)arg1;
- (void)set_securityScopedURLs:(id)arg1;
- (id)uploadURLs;
- (void)viewDidLoad;

@end
