/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver> {
    MFPlaceholderMessageRewriter * _rewriter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_contentForAttachmentPassingTest:(id /* block */)arg1;
- (id)_headersByAddingMailDropHeaders:(id)arg1;
- (id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1;
- (id)_mailDropBannerHTMLString;
- (id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long*)arg3;
- (id)contentForContentID:(id)arg1;
- (id)contentForPlaceholder:(id)arg1;
- (id)contentForURL:(id)arg1;
- (void)dealloc;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (id)scaledImages:(id)arg1;
- (bool)updateMessageWithAttachmentsSynchronously;

@end
