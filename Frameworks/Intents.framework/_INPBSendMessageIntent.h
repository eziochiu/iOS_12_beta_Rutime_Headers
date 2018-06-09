/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendMessageIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSendMessageIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _attachments;
    _INPBString * _content;
    NSString * _conversationIdentifier;
    _INPBString * _groupName;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _recipients;
    _INPBContact * _sender;
    NSString * _serviceName;
    _INPBDataString * _speakableGroupName;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly) unsigned long long attachmentsCount;
@property (nonatomic, retain) _INPBString *content;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (readonly) Class superclass;

+ (Class)attachmentType;
+ (Class)recipientType;

- (void).cxx_destruct;
- (void)addAttachment:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)associatedCodableAttribute;
- (id)attachmentAtIndex:(unsigned long long)arg1;
- (id)attachments;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)sender;
- (id)serviceName;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (id)speakableGroupName;
- (void)writeTo:(id)arg1;

@end
