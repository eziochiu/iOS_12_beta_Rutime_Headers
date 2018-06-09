/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimezone : PBCodable <NSCopying> {
    NSString * _identifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
