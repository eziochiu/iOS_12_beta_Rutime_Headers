/* made by EzioChiu.
 */

@protocol _INPBContactValue <NSObject>

@required

+ (Class)aliasesType;

- (int)StringAsSuggestionType:(NSString *)arg1;
- (void)addAliases:(_INPBContactHandle *)arg1;
- (NSArray *)aliases;
- (_INPBContactHandle *)aliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aliasesCount;
- (void)clearAliases;
- (_INPBContactHandle *)contactHandle;
- (NSString *)customIdentifier;
- (NSString *)firstName;
- (NSString *)fullName;
- (NSString *)handle;
- (bool)hasContactHandle;
- (bool)hasCustomIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasHandle;
- (bool)hasImage;
- (bool)hasIsMe;
- (bool)hasLastName;
- (bool)hasNickName;
- (bool)hasRelationship;
- (bool)hasSuggestionType;
- (bool)hasValueMetadata;
- (_INPBImageValue *)image;
- (bool)isMe;
- (NSString *)lastName;
- (NSString *)nickName;
- (NSString *)relationship;
- (void)setAliases:(NSArray *)arg1;
- (void)setContactHandle:(_INPBContactHandle *)arg1;
- (void)setCustomIdentifier:(NSString *)arg1;
- (void)setFirstName:(NSString *)arg1;
- (void)setFullName:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setImage:(_INPBImageValue *)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setLastName:(NSString *)arg1;
- (void)setNickName:(NSString *)arg1;
- (void)setRelationship:(NSString *)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)suggestionType;
- (NSString *)suggestionTypeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
