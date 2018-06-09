/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventFullNavTrace : PBCodable <NSCopying> {
    NSData * _navTraceData;
}

@property (nonatomic, readonly) bool hasNavTraceData;
@property (nonatomic, retain) NSData *navTraceData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavTraceData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navTraceData;
- (bool)readFrom:(id)arg1;
- (void)setNavTraceData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
