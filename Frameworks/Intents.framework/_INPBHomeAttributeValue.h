/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeAttributeValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBHomeAttributeValue> {
    INCodableAttribute * _associatedCodableAttribute;
    bool  _booleanValue;
    double  _doubleValue;
    struct { 
        unsigned int booleanValue : 1; 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int valueType : 1; 
    }  _has;
    long long  _integerValue;
    NSString * _stringValue;
    int  _valueType;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) bool booleanValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBooleanValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValueType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long integerValue;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic) int valueType;

- (void).cxx_destruct;
- (int)StringAsValueType:(id)arg1;
- (id)associatedCodableAttribute;
- (bool)booleanValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBooleanValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasStringValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBooleanValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBooleanValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (int)valueType;
- (id)valueTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
