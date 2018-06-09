/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentVocabulary : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBIntentVocabulary> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _intentSlotVocabularyPolicies;
    NSArray * _intentTypePhrases;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentSlotVocabularyPolicies;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyPoliciesCount;
@property (nonatomic, copy) NSArray *intentTypePhrases;
@property (nonatomic, readonly) unsigned long long intentTypePhrasesCount;
@property (readonly) Class superclass;

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (void).cxx_destruct;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)addIntentTypePhrases:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentSlotVocabularyPolicies;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyPoliciesCount;
- (id)intentTypePhrases;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentTypePhrasesCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentSlotVocabularyPolicies:(id)arg1;
- (void)setIntentTypePhrases:(id)arg1;
- (void)writeTo:(id)arg1;

@end
