/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    int  _featureType;
    NSMutableArray * _filterElements;
    struct { 
        unsigned int featureType : 1; 
    }  _has;
    GEOPDVenueItemList * _itemList;
    GEOPDLocatedInsideInfo * _locatedInside;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _venueFeatureIds;
}

@property (nonatomic) int featureType;
@property (nonatomic, retain) NSMutableArray *filterElements;
@property (nonatomic) bool hasFeatureType;
@property (nonatomic, readonly) bool hasItemList;
@property (nonatomic, readonly) bool hasLocatedInside;
@property (nonatomic, retain) GEOPDVenueItemList *itemList;
@property (nonatomic, retain) GEOPDLocatedInsideInfo *locatedInside;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *venueFeatureIds;

+ (Class)filterElementType;
+ (Class)venueFeatureIdType;
+ (id)venueInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (void)addFilterElement:(id)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (void)clearFilterElements;
- (void)clearVenueFeatureIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (id)featureTypeAsString:(int)arg1;
- (id)filterElementAtIndex:(unsigned long long)arg1;
- (id)filterElements;
- (unsigned long long)filterElementsCount;
- (bool)hasFeatureType;
- (bool)hasItemList;
- (bool)hasLocatedInside;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemList;
- (id)locatedInside;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setFilterElements:(id)arg1;
- (void)setHasFeatureType:(bool)arg1;
- (void)setItemList:(id)arg1;
- (void)setLocatedInside:(id)arg1;
- (void)setVenueFeatureIds:(id)arg1;
- (id)unknownFields;
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (id)venueFeatureIds;
- (unsigned long long)venueFeatureIdsCount;
- (void)writeTo:(id)arg1;

@end
