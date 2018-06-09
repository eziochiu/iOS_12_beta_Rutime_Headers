/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int hintSource : 1; 
    }  _has;
    int  _hintSource;
}

@property (nonatomic) bool hasHintSource;
@property (nonatomic) int hintSource;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHintSource;
- (unsigned long long)hash;
- (int)hintSource;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHintSource:(bool)arg1;
- (void)setHintSource:(int)arg1;
- (void)writeTo:(id)arg1;

@end
