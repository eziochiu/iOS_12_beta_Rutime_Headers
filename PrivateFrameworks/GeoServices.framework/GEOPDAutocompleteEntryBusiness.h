/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying> {
    double  _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    unsigned long long  _muid;
    GEOPDPlace * _place;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double distance;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distance;
- (bool)hasDistance;
- (bool)hasMuid;
- (bool)hasPlace;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)place;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setDistance:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlace:(id)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
