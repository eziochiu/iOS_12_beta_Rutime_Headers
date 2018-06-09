/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _counts;
}

@property (nonatomic, readonly) int*counts;
@property (nonatomic, readonly) unsigned long long countsCount;

- (void)addCount:(int)arg1;
- (void)clearCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countAtIndex:(unsigned long long)arg1;
- (int*)counts;
- (unsigned long long)countsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCounts:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
