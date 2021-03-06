/* made by EzioChiu.
 */

@protocol MFComposeTypeFactoryDelegate <NSObject>

@required

- (MFMailAccountProxyGenerator *)accountProxyGenerator;
- (NSArray *)attachments;
- (NSArray *)bccRecipients;
- (UIView<MFComposeBodyField> *)bodyField;
- (NSArray *)ccRecipients;
- (bool)hasAnyHiddenTrailingEmptyQuote;
- (MFMutableMessageHeaders *)savedHeaders;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setBccRecipients:(NSArray *)arg1;
- (void)setCcRecipients:(NSArray *)arg1;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (void)setSendingEmailAddress:(NSString *)arg1 addIfNotPresent:(bool)arg2;
- (void)setSubject:(NSString *)arg1;
- (void)setToRecipients:(NSArray *)arg1;
- (MFFuture *)shouldCreateRichTextRepresentation;
- (NSString *)subject;
- (NSArray *)toRecipients;

@optional

- (void)addSignature:(bool)arg1;
- (void)contentDidChange;

@end
