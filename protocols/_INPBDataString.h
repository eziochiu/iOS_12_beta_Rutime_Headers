/* made by EzioChiu.
 */

@protocol _INPBDataString <NSObject>

@required

+ (Class)alternativesType;

- (void)addAlternatives:(_INPBDataString *)arg1;
- (NSArray *)alternatives;
- (_INPBDataString *)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (bool)hasLocalizedValue;
- (bool)hasVocabularyIdentifier;
- (NSString *)localizedValue;
- (void)setAlternatives:(NSArray *)arg1;
- (void)setLocalizedValue:(NSString *)arg1;
- (void)setVocabularyIdentifier:(NSString *)arg1;
- (NSString *)vocabularyIdentifier;

@end
