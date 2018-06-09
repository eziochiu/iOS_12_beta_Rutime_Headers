/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying> {
    GEOCacheHit * _cacheHit;
    GEOCacheMiss * _cacheMiss;
}

@property (nonatomic, retain) GEOCacheHit *cacheHit;
@property (nonatomic, retain) GEOCacheMiss *cacheMiss;
@property (nonatomic, readonly) bool hasCacheHit;
@property (nonatomic, readonly) bool hasCacheMiss;

- (void).cxx_destruct;
- (id)cacheHit;
- (id)cacheMiss;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheHit;
- (bool)hasCacheMiss;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheHit:(id)arg1;
- (void)setCacheMiss:(id)arg1;
- (void)writeTo:(id)arg1;

@end
