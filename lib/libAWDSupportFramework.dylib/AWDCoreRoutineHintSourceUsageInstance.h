/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineHintSourceUsageInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int hintSource : 1; 
        unsigned int isLOI : 1; 
        unsigned int isVisit : 1; 
    }  _has;
    int  _hintSource;
    int  _isLOI;
    int  _isVisit;
}

@property (nonatomic) bool hasHintSource;
@property (nonatomic) bool hasIsLOI;
@property (nonatomic) bool hasIsVisit;
@property (nonatomic) int hintSource;
@property (nonatomic) int isLOI;
@property (nonatomic) int isVisit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHintSource;
- (bool)hasIsLOI;
- (bool)hasIsVisit;
- (unsigned long long)hash;
- (int)hintSource;
- (bool)isEqual:(id)arg1;
- (int)isLOI;
- (int)isVisit;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHintSource:(bool)arg1;
- (void)setHasIsLOI:(bool)arg1;
- (void)setHasIsVisit:(bool)arg1;
- (void)setHintSource:(int)arg1;
- (void)setIsLOI:(int)arg1;
- (void)setIsVisit:(int)arg1;
- (void)writeTo:(id)arg1;

@end
