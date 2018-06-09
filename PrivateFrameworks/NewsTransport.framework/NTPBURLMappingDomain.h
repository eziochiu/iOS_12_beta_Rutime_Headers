/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBURLMappingDomain : PBCodable <NSCopying> {
    double  _averageSafariVisitsPerDay;
    NSString * _domain;
    NSMutableArray * _paths;
}

@property (nonatomic) double averageSafariVisitsPerDay;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSMutableArray *paths;

+ (Class)pathsType;

- (void).cxx_destruct;
- (void)addPaths:(id)arg1;
- (double)averageSafariVisitsPerDay;
- (void)clearPaths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paths;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (bool)readFrom:(id)arg1;
- (void)setAverageSafariVisitsPerDay:(double)arg1;
- (void)setDomain:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)writeTo:(id)arg1;

@end
