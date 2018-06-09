/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _artworkIndexs;
    NSMutableArray * _clusters;
}

@property (nonatomic, readonly) unsigned int*artworkIndexs;
@property (nonatomic, readonly) unsigned long long artworkIndexsCount;
@property (nonatomic, retain) NSMutableArray *clusters;

+ (Class)clusterType;

- (void).cxx_destruct;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)addCluster:(id)arg1;
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)artworkIndexs;
- (unsigned long long)artworkIndexsCount;
- (void)clearArtworkIndexs;
- (void)clearClusters;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (id)clusters;
- (unsigned long long)clustersCount;
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
- (void)setClusters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
