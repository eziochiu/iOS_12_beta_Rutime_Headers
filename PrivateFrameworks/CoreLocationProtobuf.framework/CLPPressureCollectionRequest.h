/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPressureCollectionRequest : PBRequest <NSCopying> {
    CLPMeta * _meta;
    CLPPressure * _pressure;
    CLPLocation * _pressureLocation;
}

@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) CLPPressure *pressure;
@property (nonatomic, retain) CLPLocation *pressureLocation;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (id)pressure;
- (id)pressureLocation;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setMeta:(id)arg1;
- (void)setPressure:(id)arg1;
- (void)setPressureLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
