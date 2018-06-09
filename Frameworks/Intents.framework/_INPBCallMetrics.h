/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallMetrics : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCallMetrics> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBCallMetricsValue * _value;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBCallMetricsValue *value;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
