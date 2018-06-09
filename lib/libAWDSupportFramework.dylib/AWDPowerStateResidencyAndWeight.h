/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {
    struct { 
        unsigned int residency : 1; 
        unsigned int weight : 1; 
    }  _has;
    unsigned int  _residency;
    unsigned int  _weight;
}

@property (nonatomic) bool hasResidency;
@property (nonatomic) bool hasWeight;
@property (nonatomic) unsigned int residency;
@property (nonatomic) unsigned int weight;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResidency;
- (bool)hasWeight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)residency;
- (void)setHasResidency:(bool)arg1;
- (void)setHasWeight:(bool)arg1;
- (void)setResidency:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)weight;
- (void)writeTo:(id)arg1;

@end
