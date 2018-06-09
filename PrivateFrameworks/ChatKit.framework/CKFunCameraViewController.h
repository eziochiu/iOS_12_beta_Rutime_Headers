/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate> {
    IMBalloonPlugin * _balloonPlugin;
    CKConversation * _conversation;
    <CKFunCameraViewControllerDelegate> * _delegate;
    UIViewController<CKBrowserViewControllerProtocol> * _funCameraAppViewController;
    UIView * _funCameraView;
}

@property (nonatomic, retain) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKFunCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController;
@property (nonatomic, retain) UIView *funCameraView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (id)balloonPlugin;
- (void)commitPayload:(id)arg1;
- (bool)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(bool)arg3 error:(id*)arg4;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (id)configuredContentViewControllerForPlugin:(id)arg1;
- (id)contentViewControllerForPlugin:(id)arg1;
- (id)conversation;
- (id)delegate;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissToKeyboard:(bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)funCameraAppViewController;
- (id)funCameraView;
- (id)initWithConversation:(id)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)prefersStatusBarHidden;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setBalloonPlugin:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFunCameraAppViewController:(id)arg1;
- (void)setFunCameraView:(id)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)stageAssetArchive:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
