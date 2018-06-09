/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyConcept : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBIntentSlotVocabularyConcept> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSString * _identifier;
    NSArray * _synonyms;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *synonyms;
@property (nonatomic, readonly) unsigned long long synonymsCount;

+ (Class)synonymsType;

- (void).cxx_destruct;
- (void)addSynonyms:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearSynonyms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;
- (id)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;
- (void)writeTo:(id)arg1;

@end
