/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    unsigned int  _cartoId;
    struct { 
        unsigned int cartoId : 1; 
        unsigned int transitTypeEnumValue : 1; 
    }  _has;
    unsigned int  _transitTypeEnumValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic) unsigned int cartoId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCartoId;
@property (nonatomic) bool hasTransitTypeEnumValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) long long iconType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transitTypeEnumValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)cartoID;
- (unsigned int)cartoId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultTransitType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCartoId;
- (bool)hasTransitTypeEnumValue;
- (unsigned long long)hash;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (long long)iconType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCartoId:(unsigned int)arg1;
- (void)setHasCartoId:(bool)arg1;
- (void)setHasTransitTypeEnumValue:(bool)arg1;
- (void)setTransitTypeEnumValue:(unsigned int)arg1;
- (unsigned int)transitTypeEnumValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
