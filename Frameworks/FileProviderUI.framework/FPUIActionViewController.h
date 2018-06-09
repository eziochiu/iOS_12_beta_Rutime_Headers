/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

@interface FPUIActionViewController : UIViewController <DOCAppearanceProtocol, FPUIActionRemoteContextDelegate, FPUIActionRemoteViewControllerDelegate> {
    NSString * _actionIdentifier;
    NSString * _actionTitle;
    NSURL * _authenticationURL;
    unsigned long long  _browserUserInterfaceStyle;
    <FPUIActionViewControllerDelegate> * _delegate;
    bool  _displayInline;
    NSString * _domainIdentifier;
    NSError * _error;
    <FPUIActionExtensionViewControllerProtocol> * _extensionViewController;
    NSArray * _items;
    _UIResilientRemoteViewContainerViewController * _placeholderVC;
    NSString * _providerIdentifier;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *actionTitle;
@property (nonatomic, retain) NSURL *authenticationURL;
@property (nonatomic, readonly) unsigned long long browserUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPUIActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayInline;
@property (nonatomic, retain) NSString *domainIdentifier;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (readonly) Class superclass;

+ (id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;
+ (id)actionControllerForAuthenticationUsingURL:(id)arg1 providerIdentifier:(id)arg2;
+ (id)actionControllerForError:(id)arg1 providerIdentifier:(id)arg2;
+ (id)actionControllerForInlineError:(id)arg1 providerIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_delegateActionSucceed;
- (void)_delegateError:(id)arg1;
- (void)_dismissViewController;
- (id)_getExtension;
- (id)actionIdentifier;
- (id)actionTitle;
- (id)authenticationURL;
- (unsigned long long)browserUserInterfaceStyle;
- (id)delegate;
- (bool)displayInline;
- (id)domainIdentifier;
- (void)embedViewController:(id)arg1;
- (id)error;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)items;
- (id)providerIdentifier;
- (void)remoteActionContextDidFinishAction:(id)arg1 error:(id)arg2;
- (void)remoteActionControllerDidFinishAction:(id)arg1 error:(id)arg2;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayInline:(bool)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)viewDidLoad;

@end
