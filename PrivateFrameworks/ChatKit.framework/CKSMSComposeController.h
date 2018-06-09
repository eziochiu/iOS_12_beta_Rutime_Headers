/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {
    _UIAsyncInvocation * _cancellationInvocation;
    UINavigationController * _clientNavigationController;
    id  _delegate;
    bool  _didChangeStatusBarStyle;
    int  _entryViewInvisible;
    CKSMSComposeRemoteViewController * _remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy * _remoteViewControllerProxy;
    bool  _safeToAdd;
    long long  _savedStatusBarStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKSMSComposeRemoteViewController *remoteViewController;
@property (nonatomic, retain) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy;
@property (readonly) Class superclass;

+ (bool)acceptsMIMEType:(id)arg1;
+ (bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (void).cxx_destruct;
- (void)_addRemoteVCIfNeeded;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)canInsertMessage;
- (void)dealloc;
- (id)delegate;
- (void)disableCameraAttachments;
- (void)forceCancelComposition;
- (void)forceMMS;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (bool)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (bool)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (bool)insertMessage:(id)arg1;
- (bool)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;
- (id)remoteViewController;
- (id)remoteViewControllerProxy;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)arg1;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setPendingAddresses:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)setUTIs:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(id /* block */)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end