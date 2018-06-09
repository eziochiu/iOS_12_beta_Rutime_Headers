/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {
    NSString * _placeDataRequestingAppIdentifier;
}

@property (nonatomic, readonly) bool hasPlaceDataRequestingAppIdentifier;
@property (nonatomic, retain) NSString *placeDataRequestingAppIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceDataRequestingAppIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDataRequestingAppIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setPlaceDataRequestingAppIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
