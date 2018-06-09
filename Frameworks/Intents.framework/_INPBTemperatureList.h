/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemperatureList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBTemperatureList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _temperatures;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *temperatures;
@property (nonatomic, readonly) unsigned long long temperaturesCount;

+ (Class)temperatureType;

- (void).cxx_destruct;
- (void)addTemperature:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearTemperatures;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setTemperatures:(id)arg1;
- (id)temperatureAtIndex:(unsigned long long)arg1;
- (id)temperatures;
- (unsigned long long)temperaturesCount;
- (void)writeTo:(id)arg1;

@end
