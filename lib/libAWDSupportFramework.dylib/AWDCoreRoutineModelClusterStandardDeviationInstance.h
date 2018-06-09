/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {
    int  _entryStandardDeviation;
    int  _exitStandardDeviation;
    struct { 
        unsigned int entryStandardDeviation : 1; 
        unsigned int exitStandardDeviation : 1; 
    }  _has;
}

@property (nonatomic) int entryStandardDeviation;
@property (nonatomic) int exitStandardDeviation;
@property (nonatomic) bool hasEntryStandardDeviation;
@property (nonatomic) bool hasExitStandardDeviation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entryStandardDeviation;
- (int)exitStandardDeviation;
- (bool)hasEntryStandardDeviation;
- (bool)hasExitStandardDeviation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntryStandardDeviation:(int)arg1;
- (void)setExitStandardDeviation:(int)arg1;
- (void)setHasEntryStandardDeviation:(bool)arg1;
- (void)setHasExitStandardDeviation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
