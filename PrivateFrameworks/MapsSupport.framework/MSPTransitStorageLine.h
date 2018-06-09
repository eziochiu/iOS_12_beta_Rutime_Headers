/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying> {
    MSPTransitStorageArtwork * _alternateArtwork;
    MSPTransitStorageArtwork * _artwork;
    struct { 
        unsigned int muid : 1; 
    }  _has;
    NSString * _lineColorString;
    MSPTransitStorageArtwork * _modeArtwork;
    unsigned long long  _muid;
    NSString * _name;
    MSPTransitStorageSystem * _system;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *alternateArtwork;
@property (nonatomic, retain) MSPTransitStorageArtwork *alternateArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, retain) MSPTransitStorageArtwork *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlternateArtwork;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasLineColorString;
@property (nonatomic, readonly) bool hasModeArtwork;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSystem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, retain) NSString *lineColorString;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, retain) MSPTransitStorageArtwork *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;
@property (nonatomic, retain) MSPTransitStorageSystem *system;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)alternateArtwork;
- (id)artwork;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlternateArtwork;
- (bool)hasArtwork;
- (bool)hasLineColorString;
- (bool)hasModeArtwork;
- (bool)hasMuid;
- (bool)hasName;
- (bool)hasSystem;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithLine:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lineColorString;
- (void)mergeFrom:(id)arg1;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)readFrom:(id)arg1;
- (void)setAlternateArtwork:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setLineColorString:(id)arg1;
- (void)setModeArtwork:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setSystem:(id)arg1;
- (bool)showVehicleNumber;
- (id)system;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
