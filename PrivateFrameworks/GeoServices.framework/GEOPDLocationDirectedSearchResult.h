/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying> {
    NSMutableArray * _disambiguationLabels;
    GEOMapRegion * _displayMapRegion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;

- (void).cxx_destruct;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
