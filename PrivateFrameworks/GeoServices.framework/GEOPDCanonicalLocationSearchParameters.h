/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying> {
    NSString * _queryString;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasQueryString;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQueryString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryString;
- (bool)readFrom:(id)arg1;
- (void)setQueryString:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
