/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventStaleResource : PBCodable <NSCopying> {
    NSMutableArray * _staleResources;
}

@property (nonatomic, retain) NSMutableArray *staleResources;

+ (Class)staleResourceType;

- (void).cxx_destruct;
- (void)addStaleResource:(id)arg1;
- (void)clearStaleResources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStaleResources:(id)arg1;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (id)staleResources;
- (unsigned long long)staleResourcesCount;
- (void)writeTo:(id)arg1;

@end
