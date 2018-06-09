/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying> {
    struct { 
        unsigned int locationType : 1; 
        unsigned int percentage : 1; 
    }  _has;
    int  _locationType;
    int  _percentage;
}

@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasPercentage;
@property (nonatomic) int locationType;
@property (nonatomic) int percentage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocationType;
- (bool)hasPercentage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)locationType;
- (void)mergeFrom:(id)arg1;
- (int)percentage;
- (bool)readFrom:(id)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasPercentage:(bool)arg1;
- (void)setLocationType:(int)arg1;
- (void)setPercentage:(int)arg1;
- (void)writeTo:(id)arg1;

@end
