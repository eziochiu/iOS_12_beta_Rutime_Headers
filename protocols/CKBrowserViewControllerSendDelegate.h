/* made by EzioChiu.
 */

@protocol CKBrowserViewControllerSendDelegate <NSObject>

@required

- (void)commitPayload:(CKBrowserItemPayload *)arg1;
- (void)commitSticker:(IMSticker *)arg1;
- (void)commitSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissToKeyboard:(bool)arg1;
- (<CKBrowserDragControllerTranscriptDelegate> *)dragControllerTranscriptDelegate;
- (void)openURL:(void *)arg1 applicationIdentifier:(void *)arg2 pluginID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openURL:(void *)arg1 pluginID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(bool)arg2;

@optional

- (bool)commitPayload:(CKBrowserItemPayload *)arg1 forPlugin:(NSString *)arg2 allowAllCommits:(bool)arg3 error:(id*)arg4;
- (void)commitSticker:(IMSticker *)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)commitSticker:(IMSticker *)arg1 forPlugin:(NSString *)arg2;
- (void)dismissAndReloadInputViews:(bool)arg1 forPlugin:(NSString *)arg2;
- (void)eagerUploadCancelIdentifier:(NSString *)arg1;
- (void)eagerUploadPayload:(CKBrowserItemPayload *)arg1 identifier:(NSString *)arg2 replace:(bool)arg3;
- (bool)handwritingIsDisplayed;
- (void)requestPresentationStyleExpanded:(bool)arg1 forPlugin:(NSString *)arg2;
- (void)requestPresentationStyleFullScreenModalForPlugin:(NSString *)arg1;
- (void)setEntryViewHidden:(bool)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(bool)arg2 forPlugin:(NSString *)arg3;
- (void)startEditingPayload:(void *)arg1 dismiss:(void *)arg2 forPlugin:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CKBrowserItemPayload *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
