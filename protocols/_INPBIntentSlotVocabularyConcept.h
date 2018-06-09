/* made by EzioChiu.
 */

@protocol _INPBIntentSlotVocabularyConcept <NSObject>

@required

+ (Class)synonymsType;

- (void)addSynonyms:(_INPBIntentSlotVocabularyValue *)arg1;
- (void)clearSynonyms;
- (bool)hasIdentifier;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg1;
- (void)setSynonyms:(NSArray *)arg1;
- (NSArray *)synonyms;
- (_INPBIntentSlotVocabularyValue *)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;

@end
