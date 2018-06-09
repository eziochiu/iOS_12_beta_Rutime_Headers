/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate, MFMailCompositionUTITypes> {
    NSMutableArray * _attachments;
    id  _autorotationDelegate;
    _UIAsyncInvocation * _cancellationInvocation;
    long long  _composeResult;
    NSError * _composeResultError;
    NSMutableDictionary * _compositionValues;
    unsigned int  _compositionValuesAreFinalized;
    unsigned int  _delegateRespondsToBodyFinishedLoadingWithResult;
    unsigned int  _didAppear;
    unsigned int  _didEndDelayedPresentation;
    unsigned int  _didFinish;
    unsigned int  _hasDelayedPresentation;
    unsigned int  _isAppearing;
    <MFMailComposeViewControllerDelegate> * _mailComposeDelegate;
    NSString * _placeholderSubject;
    MFMailComposePlaceholderViewController * _placeholderViewController;
    double  _presentationDelayBeganTimestamp;
    unsigned int  _remoteViewControllerIsConfigured;
    MFMailComposeRemoteViewController * _serviceViewController;
}

@property (nonatomic, copy) NSArray *UTITypes;
@property (nonatomic) id autorotationDelegate;
@property (nonatomic) <MFMailComposeViewControllerDelegate> *mailComposeDelegate;

- (id)UTITypes;
- (void)_beginDelayingCompositionPresenation;
- (void)_cancelComposition:(id)arg1;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_configureRemoteViewContoller;
- (double)_delayedPresentationTimeout;
- (void)_didEndDelayingCompositionPresentation;
- (void)_endDelayingCompositionPresentation;
- (void)_finishServiceViewControllerRequestWithSuccess:(bool)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(bool)arg1;
- (void)_notifyBodyDidFinishLoadingWithResult:(bool)arg1;
- (void)_notifyCompositionDidFinish;
- (void)_processAttachmentsViaProxy:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)_setPlaceHolderSubject:(id)arg1;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)addAttachmentFileURL:(id)arg1 mimeType:(id)arg2;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)autorotationDelegate;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (void)compositionFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)compositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(id /* block */)arg3;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mailComposeDelegate;
- (id)placeholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 proxy:(id)arg5;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)securityScopeForURL:(id)arg1 proxy:(id)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setPreferredSendingEmailAddress:(id)arg1;
- (void)setShowKeyboardImmediately:(bool)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUTITypes:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
