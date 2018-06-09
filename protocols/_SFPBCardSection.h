/* made by EzioChiu.
 */

@protocol _SFPBCardSection <NSObject>

@required

- (void)addCommands:(_SFPBAbstractCommand *)arg1;
- (void)addParameterKeyPaths:(NSString *)arg1;
- (NSString *)cardSectionId;
- (void)clearCommands;
- (void)clearParameterKeyPaths;
- (NSArray *)commands;
- (_SFPBAbstractCommand *)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBCard *)nextCard;
- (NSArray *)parameterKeyPaths;
- (NSString *)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (NSString *)resultIdentifier;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setCommands:(NSArray *)arg1;
- (void)setNextCard:(_SFPBCard *)arg1;
- (void)setParameterKeyPaths:(NSArray *)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(_SFPBCardSectionValue *)arg1;
- (int)type;
- (_SFPBCardSectionValue *)value;

@end