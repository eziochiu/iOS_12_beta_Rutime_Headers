/* made by EzioChiu.
 */

@protocol _MSMessageComposeExtensionImplProtocol <_MSMessageComposeExtensionProtocol>

@required

- (void)_remoteViewDidBecomeReadyForDisplay;
- (MSConversation *)activeConversation;
- (<_MSMessageComposeExtensionImplProtocol> *)containingContext;
- (void)contentDidLoad;
- (void)dismiss;
- (<_MSMessageComposeHostImplProtocol> *)hostContext;
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (void)removeAssetArchiveWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestResize;
- (void)setContainingContext:(id <_MSMessageComposeExtensionImplProtocol>)arg1;
- (void)setHostContext:(id <_MSMessageComposeHostImplProtocol>)arg1;
- (void)setPresentationContext:(unsigned long long)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)stageAppItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageAssetArchive:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageMediaItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _MSMessageMediaPayload *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageRichLink:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSRichLink *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDragMediaItem:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (UIViewController *)stickerViewController;
- (UIViewController *)viewController;

@end
