/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCorrections : PBCodable <NSCopying> {
    NSString * _comments;
    GEORPCorrectedCoordinate * _correctedCoordinate;
    NSMutableArray * _correctedFields;
    NSMutableArray * _correctedFlags;
    GEORPCorrectedLabel * _correctedLabel;
    GEORPMapLocation * _correctedMapLocation;
    GEORPCorrectedSearch * _correctedSearch;
    bool  _delayed;
    GEORPDirectionsProblem * _directionsProblem;
    struct { 
        unsigned int delayed : 1; 
    }  _has;
    NSMutableArray * _photoWithMetadatas;
    GEORPPlaceProblem * _placeProblem;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic, retain) GEORPCorrectedCoordinate *correctedCoordinate;
@property (nonatomic, retain) NSMutableArray *correctedFields;
@property (nonatomic, retain) NSMutableArray *correctedFlags;
@property (nonatomic, retain) GEORPCorrectedLabel *correctedLabel;
@property (nonatomic, retain) GEORPMapLocation *correctedMapLocation;
@property (nonatomic, retain) GEORPCorrectedSearch *correctedSearch;
@property (nonatomic) bool delayed;
@property (nonatomic, retain) GEORPDirectionsProblem *directionsProblem;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic, readonly) bool hasCorrectedCoordinate;
@property (nonatomic, readonly) bool hasCorrectedLabel;
@property (nonatomic, readonly) bool hasCorrectedMapLocation;
@property (nonatomic, readonly) bool hasCorrectedSearch;
@property (nonatomic) bool hasDelayed;
@property (nonatomic, readonly) bool hasDirectionsProblem;
@property (nonatomic, readonly) bool hasPlaceProblem;
@property (nonatomic, retain) NSMutableArray *photoWithMetadatas;
@property (nonatomic, retain) GEORPPlaceProblem *placeProblem;

+ (Class)correctedFieldType;
+ (Class)correctedFlagType;
+ (Class)photoWithMetadataType;

- (void).cxx_destruct;
- (void)addCorrectedField:(id)arg1;
- (void)addCorrectedFlag:(id)arg1;
- (void)addPhotoWithMetadata:(id)arg1;
- (void)clearCorrectedFields;
- (void)clearCorrectedFlags;
- (void)clearPhotoWithMetadatas;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedCoordinate;
- (id)correctedFieldAtIndex:(unsigned long long)arg1;
- (id)correctedFields;
- (unsigned long long)correctedFieldsCount;
- (id)correctedFlagAtIndex:(unsigned long long)arg1;
- (id)correctedFlags;
- (unsigned long long)correctedFlagsCount;
- (id)correctedLabel;
- (id)correctedMapLocation;
- (id)correctedSearch;
- (bool)delayed;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsProblem;
- (bool)hasComments;
- (bool)hasCorrectedCoordinate;
- (bool)hasCorrectedLabel;
- (bool)hasCorrectedMapLocation;
- (bool)hasCorrectedSearch;
- (bool)hasDelayed;
- (bool)hasDirectionsProblem;
- (bool)hasPlaceProblem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoWithMetadataAtIndex:(unsigned long long)arg1;
- (id)photoWithMetadatas;
- (unsigned long long)photoWithMetadatasCount;
- (id)placeProblem;
- (bool)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setCorrectedFields:(id)arg1;
- (void)setCorrectedFlags:(id)arg1;
- (void)setCorrectedLabel:(id)arg1;
- (void)setCorrectedMapLocation:(id)arg1;
- (void)setCorrectedSearch:(id)arg1;
- (void)setDelayed:(bool)arg1;
- (void)setDirectionsProblem:(id)arg1;
- (void)setHasDelayed:(bool)arg1;
- (void)setPhotoWithMetadatas:(id)arg1;
- (void)setPlaceProblem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
