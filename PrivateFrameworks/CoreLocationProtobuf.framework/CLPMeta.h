/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMeta : PBCodable <NSCopying> {
    struct { 
        unsigned int submissionId : 1; 
    }  _has;
    NSString * _probeId;
    NSString * _productId;
    NSString * _softwareVersion;
    long long  _submissionId;
}

@property (nonatomic, readonly) bool hasProbeId;
@property (nonatomic) bool hasSubmissionId;
@property (nonatomic, retain) NSString *probeId;
@property (nonatomic, retain) NSString *productId;
@property (nonatomic, retain) NSString *softwareVersion;
@property (nonatomic) long long submissionId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProbeId;
- (bool)hasSubmissionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)probeId;
- (id)productId;
- (bool)readFrom:(id)arg1;
- (void)setHasSubmissionId:(bool)arg1;
- (void)setProbeId:(id)arg1;
- (void)setProductId:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSubmissionId:(long long)arg1;
- (id)softwareVersion;
- (long long)submissionId;
- (void)writeTo:(id)arg1;

@end
