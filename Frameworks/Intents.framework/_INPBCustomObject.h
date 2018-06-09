/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCustomObject : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCustomObject> {
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _displayString;
    struct { }  _has;
    NSString * _identifier;
    NSString * _pronunciationHint;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPronunciationHint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *pronunciationHint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayString;
- (bool)hasDisplayString;
- (bool)hasIdentifier;
- (bool)hasPronunciationHint;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)pronunciationHint;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPronunciationHint:(id)arg1;
- (void)writeTo:(id)arg1;

@end
