/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {
    NSMutableArray * _formattedAddressLines;
    int  _formattedAddressType;
    struct { 
        unsigned int formattedAddressType : 1; 
    }  _has;
    GEOStructuredAddress * _structuredAddress;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *formattedAddressLines;
@property (nonatomic) int formattedAddressType;
@property (nonatomic) bool hasFormattedAddressType;
@property (nonatomic, readonly) bool hasStructuredAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOStructuredAddress *structuredAddress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFormattedAddressType:(id)arg1;
- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (id)addressDictionary;
- (id)bestName;
- (void)clearFormattedAddressLines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLines;
- (unsigned long long)formattedAddressLinesCount;
- (int)formattedAddressType;
- (id)formattedAddressTypeAsString:(int)arg1;
- (bool)hasFormattedAddressType;
- (bool)hasStructuredAddress;
- (unsigned long long)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (void)setFormattedAddressType:(int)arg1;
- (void)setHasFormattedAddressType:(bool)arg1;
- (void)setStructuredAddress:(id)arg1;
- (id)structuredAddress;
- (id)unknownFields;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)singleLineAddress;

@end
