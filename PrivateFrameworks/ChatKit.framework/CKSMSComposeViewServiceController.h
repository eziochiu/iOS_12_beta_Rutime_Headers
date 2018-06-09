/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol> {
    bool  _canEditRecipients;
    <CKSMSComposeViewServiceControllerDelegate> * _composeDelegate;
    bool  _disableCameraAttachments;
    bool  _forceMMS;
    id /* block */  _gameCenterPickerBlock;
    CKModalTranscriptController * _modalTranscriptController;
    bool  _supportsAttachments;
    bool  _supportsMessageInspection;
    NSArray * _utiTypes;
}

@property (nonatomic) bool canEditRecipients;
@property (nonatomic) <CKSMSComposeViewServiceControllerDelegate> *composeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ gameCenterPickerBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKModalTranscriptController *modalTranscriptController;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_forceMMSIfNecessary;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(bool)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(bool)arg5 appendedVideoURL:(id)arg6;
- (void)_willAppearInRemoteViewController;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(id /* block */)arg4;
- (bool)composeChatControllerCanEditRecipients;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (id)composeDelegate;
- (void)dealloc;
- (void)disableCameraAttachments;
- (void)donateInteractionWithRecipients:(id)arg1;
- (void)forceCancelComposition;
- (void)forceMMS;
- (id /* block */)gameCenterPickerBlock;
- (id)init;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)insertRemoteItemForSending:(id)arg1;
- (id)modalTranscriptController;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setComposeDelegate:(id)arg1;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)arg1;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterPickerBlock:(id /* block */)arg1;
- (void)setModalTranscriptController:(id)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)setUTIs:(id)arg1;
- (bool)supportsAttachments;
- (bool)supportsMessageInspection;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
