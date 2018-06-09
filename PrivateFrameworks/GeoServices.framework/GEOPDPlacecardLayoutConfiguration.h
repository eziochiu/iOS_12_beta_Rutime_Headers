/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entriesType;
+ (id)placecardLayoutConfigurationPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
