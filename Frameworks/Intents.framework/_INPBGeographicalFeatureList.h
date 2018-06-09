/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGeographicalFeatureList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGeographicalFeatureList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    NSArray * _geographicalFeatures;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *geographicalFeatures;
@property (nonatomic, readonly) unsigned long long geographicalFeaturesCount;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)geographicalFeatureType;

- (void).cxx_destruct;
- (void)addGeographicalFeature:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearGeographicalFeatures;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)geographicalFeatureAtIndex:(unsigned long long)arg1;
- (id)geographicalFeatures;
- (unsigned long long)geographicalFeaturesCount;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setGeographicalFeatures:(id)arg1;
- (void)writeTo:(id)arg1;

@end
