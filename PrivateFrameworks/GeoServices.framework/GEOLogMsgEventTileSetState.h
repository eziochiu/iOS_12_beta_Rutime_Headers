/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {
    double  _durationInOldState;
    struct { 
        unsigned int durationInOldState : 1; 
        unsigned int newCoverage : 1; 
        unsigned int oldCoverage : 1; 
        unsigned int tileSetStateType : 1; 
    }  _has;
    double  _newCoverage;
    double  _oldCoverage;
    int  _tileSetStateType;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) bool hasDurationInOldState;
@property (nonatomic) bool hasNewCoverage;
@property (nonatomic) bool hasOldCoverage;
@property (nonatomic) bool hasTileSetStateType;
@property (nonatomic) double newCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) int tileSetStateType;

- (int)StringAsTileSetStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (bool)hasNewCoverage;
- (bool)hasOldCoverage;
- (bool)hasTileSetStateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)newCoverage;
- (double)oldCoverage;
- (bool)readFrom:(id)arg1;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(bool)arg1;
- (void)setHasNewCoverage:(bool)arg1;
- (void)setHasOldCoverage:(bool)arg1;
- (void)setHasTileSetStateType:(bool)arg1;
- (void)setNewCoverage:(double)arg1;
- (void)setOldCoverage:(double)arg1;
- (void)setTileSetStateType:(int)arg1;
- (int)tileSetStateType;
- (id)tileSetStateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
