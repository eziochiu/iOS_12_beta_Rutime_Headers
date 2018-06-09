/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalkingOptions : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _avoidedModes;
    struct { 
        unsigned int preferredSpeed : 1; 
    }  _has;
    double  _preferredSpeed;
}

@property (nonatomic, readonly) int*avoidedModes;
@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic) bool hasPreferredSpeed;
@property (nonatomic) double preferredSpeed;

- (int)StringAsAvoidedModes:(id)arg1;
- (void)addAvoidedMode:(int)arg1;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (int*)avoidedModes;
- (id)avoidedModesAsString:(int)arg1;
- (unsigned long long)avoidedModesCount;
- (void)clearAvoidedModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreferredSpeed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)preferredSpeed;
- (bool)readFrom:(id)arg1;
- (void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasPreferredSpeed:(bool)arg1;
- (void)setPreferredSpeed:(double)arg1;
- (void)writeTo:(id)arg1;

@end
