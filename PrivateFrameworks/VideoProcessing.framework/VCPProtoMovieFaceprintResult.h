/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieFaceprintResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    unsigned int  _faceID;
    NSData * _faceprintBlob;
}

@property (nonatomic) unsigned int faceID;
@property (nonatomic, retain) NSData *faceprintBlob;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned int)faceID;
- (id)faceprintBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFaceID:(unsigned int)arg1;
- (void)setFaceprintBlob:(id)arg1;
- (void)writeTo:(id)arg1;

@end
