/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {
    struct { 
        unsigned int showVehicleNumber : 1; 
    }  _has;
    bool  _showVehicleNumber;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasShowVehicleNumber;
@property (nonatomic) bool showVehicleNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShowVehicleNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShowVehicleNumber:(bool)arg1;
- (void)setShowVehicleNumber:(bool)arg1;
- (bool)showVehicleNumber;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
