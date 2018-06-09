/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactHandle : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBContactHandle> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    int  _type;
    NSString * _value;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
