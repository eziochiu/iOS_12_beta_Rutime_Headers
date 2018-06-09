/* made by EzioChiu.
 */

@protocol INSendMessageIntentExport <NSObject, JSExport>

@required

- (NSArray *)attachments;
- (NSString *)content;
- (NSString *)conversationIdentifier;
- (id)init;
- (NSArray *)recipients;
- (INPerson *)sender;
- (NSString *)serviceName;
- (void)setAttachments:(NSArray *)arg1;
- (void)setContent:(NSString *)arg1;
- (void)setConversationIdentifier:(NSString *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(INPerson *)arg1;
- (void)setServiceName:(NSString *)arg1;
- (void)setSpeakableGroupName:(INSpeakableString *)arg1;
- (INSpeakableString *)speakableGroupName;

@end