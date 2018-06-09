/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieSummaryResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    bool  _autoPlayable;
    float  _curationScore;
    VCPProtoVideoKeyFrame * _keyFrame;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) bool autoPlayable;
@property (nonatomic) float curationScore;
@property (nonatomic, retain) VCPProtoVideoKeyFrame *keyFrame;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)autoPlayable;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)curationScore;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyFrame;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutoPlayable:(bool)arg1;
- (void)setCurationScore:(float)arg1;
- (void)setKeyFrame:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
