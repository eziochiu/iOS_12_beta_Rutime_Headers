/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONonComponentPlaceData : PBCodable <NSCopying> {
    struct { 
        unsigned int muid : 1; 
        unsigned int preferredMuid : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    unsigned long long  _preferredMuid;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMapsId;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasPreferredMuid;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long preferredMuid;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)placeWithNonComponentForPDPlace:(id)arg1;
+ (id)placeWithoutNonComponentForPDPlace:(id)arg1;

- (void).cxx_destruct;
- (void)_populatePDPlace:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapsId;
- (bool)hasMuid;
- (bool)hasPreferredMuid;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (id)initWithPDPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapsId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (unsigned long long)preferredMuid;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPreferredMuid:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setMapsId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPreferredMuid:(unsigned long long)arg1;
- (void)setResultProviderId:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
