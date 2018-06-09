/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWeightedTagID : PBCodable <NSCopying> {
    NSString * _tagId;
    float  _weight;
}

@property (nonatomic, retain) NSString *tagId;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTagId:(id)arg1;
- (void)setWeight:(float)arg1;
- (id)tagId;
- (float)weight;
- (void)writeTo:(id)arg1;

@end
