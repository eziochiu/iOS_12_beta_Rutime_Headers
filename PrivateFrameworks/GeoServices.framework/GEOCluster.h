/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCluster : PBCodable <NSCopying> {
    GEOPlaceResult * _container;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _indexs;
}

@property (nonatomic, retain) GEOPlaceResult *container;
@property (nonatomic, readonly) bool hasContainer;
@property (nonatomic, readonly) int*indexs;
@property (nonatomic, readonly) unsigned long long indexsCount;

- (void).cxx_destruct;
- (void)addIndex:(int)arg1;
- (void)clearIndexs;
- (id)container;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainer;
- (unsigned long long)hash;
- (int)indexAtIndex:(unsigned long long)arg1;
- (int*)indexs;
- (unsigned long long)indexsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
