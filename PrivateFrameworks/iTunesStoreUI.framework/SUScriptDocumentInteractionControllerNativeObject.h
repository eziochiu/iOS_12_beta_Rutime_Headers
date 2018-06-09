/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {
    bool  _didPickApplication;
    bool  _isVisible;
    id /* block */  _presentationBlock;
    bool  _redisplayAfterRotation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_isAffectedByWindowNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)dealloc;
- (void)destroyNativeObject;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)presentUsingBlock:(id /* block */)arg1;
- (void)setupNativeObject;

@end
