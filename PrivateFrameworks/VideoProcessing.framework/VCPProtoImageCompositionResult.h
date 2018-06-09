/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoImageCompositionResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _confidence;
    VCPProtoLine * _dominantLine;
    VCPProtoPoint * _vanishingPoint;
}

@property (nonatomic) float confidence;
@property (nonatomic, retain) VCPProtoLine *dominantLine;
@property (nonatomic, retain) VCPProtoPoint *vanishingPoint;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dominantLine;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setDominantLine:(id)arg1;
- (void)setVanishingPoint:(id)arg1;
- (id)vanishingPoint;
- (void)writeTo:(id)arg1;

@end
