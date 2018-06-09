/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDataString : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDataString> {
    NSArray * _alternatives;
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSString * _localizedValue;
    NSString * _vocabularyIdentifier;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocalizedValue;
@property (nonatomic, readonly) bool hasVocabularyIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vocabularyIdentifier;

+ (Class)alternativesType;

- (void).cxx_destruct;
- (void)addAlternatives:(id)arg1;
- (id)alternatives;
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (id)associatedCodableAttribute;
- (void)clearAlternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedValue;
- (bool)hasVocabularyIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedValue;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setLocalizedValue:(id)arg1;
- (void)setVocabularyIdentifier:(id)arg1;
- (id)vocabularyIdentifier;
- (void)writeTo:(id)arg1;

@end
