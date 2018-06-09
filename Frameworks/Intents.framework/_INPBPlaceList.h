/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPlaceList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPlaceList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _places;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *places;
@property (nonatomic, readonly) unsigned long long placesCount;
@property (readonly) Class superclass;

+ (Class)placeType;

- (void).cxx_destruct;
- (void)addPlace:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearPlaces;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
- (id)places;
- (unsigned long long)placesCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)writeTo:(id)arg1;

@end
