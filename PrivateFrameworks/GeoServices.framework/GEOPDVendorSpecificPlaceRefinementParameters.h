/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSData * _addressObjectHint;
    NSString * _externalItemId;
    NSMutableArray * _formattedAddressLineHints;
    struct { 
        unsigned int muid : 1; 
        unsigned int addressGeocodeAccuracyHint : 1; 
        unsigned int placeTypeHint : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    GEOLatLng * _locationHint;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic) int addressGeocodeAccuracyHint;
@property (nonatomic, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, retain) NSData *addressObjectHint;
@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) bool hasAddressGeocodeAccuracyHint;
@property (nonatomic, readonly) bool hasAddressHint;
@property (nonatomic, readonly) bool hasAddressObjectHint;
@property (nonatomic, readonly) bool hasExternalItemId;
@property (nonatomic, readonly) bool hasLocationHint;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceNameHint;
@property (nonatomic) bool hasPlaceTypeHint;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, retain) GEOLatLng *locationHint;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vendorId;

+ (Class)formattedAddressLineHintType;

- (void).cxx_destruct;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (int)addressGeocodeAccuracyHint;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
- (id)addressHint;
- (id)addressObjectHint;
- (void)clearFormattedAddressLineHints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLineHints;
- (unsigned long long)formattedAddressLineHintsCount;
- (bool)hasAddressGeocodeAccuracyHint;
- (bool)hasAddressHint;
- (bool)hasAddressObjectHint;
- (bool)hasExternalItemId;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (bool)hasPlaceNameHint;
- (bool)hasPlaceTypeHint;
- (bool)hasResultProviderId;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 contentProvider:(id)arg3;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(struct { double x1; double x2; })arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (id)placeTypeHintAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setAddressGeocodeAccuracyHint:(int)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setAddressObjectHint:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasAddressGeocodeAccuracyHint:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPlaceTypeHint:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setVendorId:(id)arg1;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
