/* made by EzioChiu.
 */

@protocol INPersonExport <NSObject, JSExport>

@required

- (NSArray *)aliases;
- (NSArray *)alternatives;
- (NSString *)contactIdentifier;
- (NSString *)customIdentifier;
- (NSString *)displayName;
- (NSString *)handle;
- (INImage *)image;
- (id)init;
- (bool)isMe;
- (NSPersonNameComponents *)nameComponents;
- (INPersonHandle *)personHandle;
- (NSString *)relationship;
- (void)setAliases:(NSArray *)arg1;
- (void)setAlternatives:(NSArray *)arg1;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setCustomIdentifier:(NSString *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setImage:(INImage *)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setNameComponents:(NSPersonNameComponents *)arg1;
- (void)setPersonHandle:(INPersonHandle *)arg1;
- (void)setRelationship:(NSString *)arg1;
- (void)setSuggestionType:(long long)arg1;
- (long long)suggestionType;

@end
