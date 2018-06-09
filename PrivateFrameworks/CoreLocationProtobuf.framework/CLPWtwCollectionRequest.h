/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPWtwCollectionRequest : PBRequest <NSCopying> {
    CLPMeta * _meta;
    NSMutableArray * _wtwLocations;
}

@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSMutableArray *wtwLocations;

+ (Class)wtwLocationType;

- (void).cxx_destruct;
- (void)addWtwLocation:(id)arg1;
- (void)clearWtwLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setMeta:(id)arg1;
- (void)setWtwLocations:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)wtwLocationAtIndex:(unsigned long long)arg1;
- (id)wtwLocations;
- (unsigned long long)wtwLocationsCount;

@end
