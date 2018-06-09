/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoLivePhotoFrameInstruction : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _homographyParams;
    long long  _timeValue;
}

@property (nonatomic, readonly) float*homographyParams;
@property (nonatomic, readonly) unsigned long long homographyParamsCount;
@property (nonatomic) long long timeValue;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)addHomographyParam:(float)arg1;
- (void)clearHomographyParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (float)homographyParamAtIndex:(unsigned long long)arg1;
- (float*)homographyParams;
- (unsigned long long)homographyParamsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2;
- (void)setTimeValue:(long long)arg1;
- (long long)timeValue;
- (void)writeTo:(id)arg1;

@end
