/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitAttribution : PBCodable <NSCopying> {
    NSMutableArray * _providerNames;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *providerNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)providerNameType;
+ (id)transitAttributionForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addProviderName:(id)arg1;
- (void)clearProviderNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerNameAtIndex:(unsigned long long)arg1;
- (id)providerNames;
- (unsigned long long)providerNamesCount;
- (bool)readFrom:(id)arg1;
- (void)setProviderNames:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
