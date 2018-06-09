/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderResolveStatsHostname : PBCodable <NSCopying> {
    NSString * _name;
    NSMutableArray * _results;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *results;

+ (Class)resultType;

- (void)addResult:(id)arg1;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)resultAtIndex:(unsigned long long)arg1;
- (id)results;
- (unsigned long long)resultsCount;
- (void)setName:(id)arg1;
- (void)setResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
