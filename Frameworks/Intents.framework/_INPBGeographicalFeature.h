/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGeographicalFeature : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGeographicalFeature> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _geographicalFeatureDescriptors;
    _INPBString * _geographicalFeatureType;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly) unsigned long long geographicalFeatureDescriptorsCount;
@property (nonatomic, retain) _INPBString *geographicalFeatureType;
@property (nonatomic, readonly) bool hasGeographicalFeatureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)geographicalFeatureDescriptorsType;

- (void).cxx_destruct;
- (void)addGeographicalFeatureDescriptors:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearGeographicalFeatureDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)geographicalFeatureDescriptors;
- (id)geographicalFeatureDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)geographicalFeatureDescriptorsCount;
- (id)geographicalFeatureType;
- (bool)hasGeographicalFeatureType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setGeographicalFeatureDescriptors:(id)arg1;
- (void)setGeographicalFeatureType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
