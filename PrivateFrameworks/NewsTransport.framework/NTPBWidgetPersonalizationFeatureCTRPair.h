/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {
    float  _ctr;
    struct { 
        unsigned int ctr : 1; 
    }  _has;
    NSString * _personalizationFeatureId;
}

@property (nonatomic) float ctr;
@property (nonatomic) bool hasCtr;
@property (nonatomic, readonly) bool hasPersonalizationFeatureId;
@property (nonatomic, retain) NSString *personalizationFeatureId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)ctr;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCtr;
- (bool)hasPersonalizationFeatureId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personalizationFeatureId;
- (bool)readFrom:(id)arg1;
- (void)setCtr:(float)arg1;
- (void)setHasCtr:(bool)arg1;
- (void)setPersonalizationFeatureId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
