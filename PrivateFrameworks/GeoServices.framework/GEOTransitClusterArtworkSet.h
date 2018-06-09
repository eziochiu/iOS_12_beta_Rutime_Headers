/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _artworkIndexs;
}

@property (nonatomic, readonly) unsigned int*artworkIndexs;
@property (nonatomic, readonly) unsigned long long artworkIndexsCount;

- (void)addArtworkIndex:(unsigned int)arg1;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)artworkIndexs;
- (unsigned long long)artworkIndexsCount;
- (void)clearArtworkIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
