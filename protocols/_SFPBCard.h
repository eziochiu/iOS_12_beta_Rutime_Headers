/* made by EzioChiu.
 */

@protocol _SFPBCard <NSObject>

@required

- (void)addCardSections:(_SFPBCardSection *)arg1;
- (void)addDismissalCommands:(_SFPBAbstractCommand *)arg1;
- (void)addEntityProtobufMessages:(_SFPBNamedProtobufMessage *)arg1;
- (NSString *)cardId;
- (NSArray *)cardSections;
- (_SFPBCardSection *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (void)clearDismissalCommands;
- (void)clearEntityProtobufMessages;
- (NSString *)contextReferenceIdentifier;
- (NSArray *)dismissalCommands;
- (_SFPBAbstractCommand *)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dismissalCommandsCount;
- (NSData *)entityIdentifier;
- (NSArray *)entityProtobufMessages;
- (_SFPBNamedProtobufMessage *)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityProtobufMessagesCount;
- (NSString *)fbr;
- (bool)flexibleSectionOrder;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)intentMessageData;
- (NSString *)intentMessageName;
- (NSData *)intentResponseMessageData;
- (NSString *)intentResponseMessageName;
- (NSData *)jsonData;
- (unsigned long long)queryId;
- (NSString *)resultIdentifier;
- (void)setCardId:(NSString *)arg1;
- (void)setCardSections:(NSArray *)arg1;
- (void)setContextReferenceIdentifier:(NSString *)arg1;
- (void)setDismissalCommands:(NSArray *)arg1;
- (void)setEntityIdentifier:(NSData *)arg1;
- (void)setEntityProtobufMessages:(NSArray *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setFlexibleSectionOrder:(bool)arg1;
- (void)setIntentMessageData:(NSData *)arg1;
- (void)setIntentMessageName:(NSString *)arg1;
- (void)setIntentResponseMessageData:(NSData *)arg1;
- (void)setIntentResponseMessageName:(NSString *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(_SFPBURL *)arg1;
- (int)source;
- (NSString *)title;
- (int)type;
- (_SFPBURL *)urlValue;

@end
