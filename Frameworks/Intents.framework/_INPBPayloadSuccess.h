/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadSuccess : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayloadSuccess> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSString * _resolvedKeyPath;
    _INPBIntentSlotValue * _resolvedValue;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResolvedKeyPath;
@property (nonatomic, readonly) bool hasResolvedValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *resolvedKeyPath;
@property (nonatomic, retain) _INPBIntentSlotValue *resolvedValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasResolvedKeyPath;
- (bool)hasResolvedValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolvedKeyPath;
- (id)resolvedValue;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setResolvedKeyPath:(id)arg1;
- (void)setResolvedValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
