/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieFaceResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    int  _faceID;
    bool  _isCloseup;
    int  _mouthExpression;
    int  _position;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic) int faceID;
@property (nonatomic) bool isCloseup;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int position;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (int)faceID;
- (unsigned long long)hash;
- (bool)isCloseup;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mouthExpression;
- (int)position;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setFaceID:(int)arg1;
- (void)setIsCloseup:(bool)arg1;
- (void)setMouthExpression:(int)arg1;
- (void)setPosition:(int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
