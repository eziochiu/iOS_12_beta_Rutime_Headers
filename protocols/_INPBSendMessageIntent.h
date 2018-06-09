/* made by EzioChiu.
 */

@protocol _INPBSendMessageIntent <NSObject>

@required

+ (Class)attachmentType;
+ (Class)recipientType;

- (void)addAttachment:(_INPBMessageAttachment *)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (_INPBMessageAttachment *)attachmentAtIndex:(unsigned long long)arg1;
- (NSArray *)attachments;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;
- (void)clearRecipients;
- (_INPBString *)content;
- (NSString *)conversationIdentifier;
- (_INPBString *)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (NSArray *)recipients;
- (unsigned long long)recipientsCount;
- (_INPBContact *)sender;
- (NSString *)serviceName;
- (void)setAttachments:(NSArray *)arg1;
- (void)setContent:(_INPBString *)arg1;
- (void)setConversationIdentifier:(NSString *)arg1;
- (void)setGroupName:(_INPBString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(_INPBContact *)arg1;
- (void)setServiceName:(NSString *)arg1;
- (void)setSpeakableGroupName:(_INPBDataString *)arg1;
- (_INPBDataString *)speakableGroupName;

@end
