/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailSignatureControllerWK1 : MFMailSignatureController <DOMEventListener> {
    bool  _skipEventHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_createSignatureElement:(id)arg1 prepend:(bool)arg2 node:(id)arg3 signature:(id)arg4;
- (id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(bool)arg3 node:(id)arg4;
- (id)_domDocumentForComposeBodyField:(id)arg1;
- (bool)_isDraftRestore:(id)arg1;
- (id)_locateSignatureDiv:(id)arg1;
- (id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3;
- (void)_removeSignatureForSender:(id)arg1 document:(id)arg2;
- (id)_signatureMarkupStringForSender:(id)arg1;
- (bool)_updateToSignature:(id)arg1 forDocument:(id)arg2;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(bool)arg3;
- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDocument:(id)arg1 withHiddenSignatureHandler:(id /* block */)arg2;
- (void)handleEvent:(id)arg1;
- (void)invalidateBodyField:(id)arg1;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;

@end