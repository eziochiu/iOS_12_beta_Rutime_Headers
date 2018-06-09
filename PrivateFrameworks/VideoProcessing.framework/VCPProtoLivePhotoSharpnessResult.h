/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoLivePhotoSharpnessResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _sharpness;
}

@property (nonatomic) float sharpness;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSharpness:(float)arg1;
- (float)sharpness;
- (void)writeTo:(id)arg1;

@end
