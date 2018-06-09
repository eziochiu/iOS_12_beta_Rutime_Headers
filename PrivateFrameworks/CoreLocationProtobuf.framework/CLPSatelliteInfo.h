/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPSatelliteInfo : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _azimuths;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _cnos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _elevations;
    struct { 
        bool *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _isUsedInFixes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _satIds;
}

@property (nonatomic, readonly) int*azimuths;
@property (nonatomic, readonly) unsigned long long azimuthsCount;
@property (nonatomic, readonly) int*cnos;
@property (nonatomic, readonly) unsigned long long cnosCount;
@property (nonatomic, readonly) int*elevations;
@property (nonatomic, readonly) unsigned long long elevationsCount;
@property (nonatomic, readonly) bool*isUsedInFixes;
@property (nonatomic, readonly) unsigned long long isUsedInFixesCount;
@property (nonatomic, readonly) int*satIds;
@property (nonatomic, readonly) unsigned long long satIdsCount;

- (void)addAzimuths:(int)arg1;
- (void)addCnos:(int)arg1;
- (void)addElevations:(int)arg1;
- (void)addIsUsedInFixes:(bool)arg1;
- (void)addSatIds:(int)arg1;
- (int*)azimuths;
- (int)azimuthsAtIndex:(unsigned long long)arg1;
- (unsigned long long)azimuthsCount;
- (void)clearAzimuths;
- (void)clearCnos;
- (void)clearElevations;
- (void)clearIsUsedInFixes;
- (void)clearSatIds;
- (int*)cnos;
- (int)cnosAtIndex:(unsigned long long)arg1;
- (unsigned long long)cnosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)elevations;
- (int)elevationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)elevationsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool*)isUsedInFixes;
- (bool)isUsedInFixesAtIndex:(unsigned long long)arg1;
- (unsigned long long)isUsedInFixesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int*)satIds;
- (int)satIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)satIdsCount;
- (void)setAzimuths:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCnos:(int*)arg1 count:(unsigned long long)arg2;
- (void)setElevations:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIsUsedInFixes:(bool*)arg1 count:(unsigned long long)arg2;
- (void)setSatIds:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
