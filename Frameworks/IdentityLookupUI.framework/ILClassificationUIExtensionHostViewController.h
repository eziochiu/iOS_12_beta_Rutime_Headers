/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, MFMessageComposeViewControllerDelegate, UINavigationBarDelegate> {
    ILClassificationRequest * _classificationRequest;
    ILClassificationResponse * _classificationResponse;
    <ILClassificationUIExtensionHostViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    ILClassificationUIExtensionHostContext * _extensionHostContext;
    NSString * _extensionIdentifier;
    UIViewController * _extensionRemoteViewController;
    NSUUID * _extensionRequestIdentifier;
    NSString * _isoCountryCode;
    UINavigationBar * _navigationBar;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sender;
}

@property (nonatomic, readonly) ILClassificationRequest *classificationRequest;
@property (nonatomic, retain) ILClassificationResponse *classificationResponse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ILClassificationUIExtensionHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) ILClassificationUIExtensionHostContext *extensionHostContext;
@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, retain) UIViewController *extensionRemoteViewController;
@property (nonatomic, retain) NSUUID *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, retain) UINavigationBar *navigationBar;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *sender;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)blockNumber:(id)arg1 withCountryCode:(id)arg2;
- (id)classificationRequest;
- (id)classificationResponse;
- (void)context:(id)arg1 didBecomeReadyForClassificationResponse:(bool)arg2;
- (id)delegate;
- (void)didCompleteClassificationRequestWithResponse:(id)arg1;
- (id)extension;
- (id)extensionHostContext;
- (id)extensionIdentifier;
- (id)extensionRemoteViewController;
- (id)extensionRequestIdentifier;
- (void)finish;
- (id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)isoCountryCode;
- (void)launchSettings;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)navigationBar;
- (long long)positionForBar:(id)arg1;
- (void)presentBlockAlert;
- (id)queue;
- (void)reportResponse:(id)arg1;
- (void)reportViaSMSWithSender:(id)arg1 body:(id)arg2;
- (id)sender;
- (void)setClassificationResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionHostContext:(id)arg1;
- (void)setExtensionRemoteViewController:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setupNavigationBar;
- (void)userDidCancelClassification;
- (void)userDidCompleteClassification;
- (void)viewDidLoad;

@end
