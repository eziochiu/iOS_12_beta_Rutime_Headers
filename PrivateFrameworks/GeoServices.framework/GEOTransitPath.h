/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPath : PBCodable <NSCopying> {
    NSMutableArray * _legs;
}

@property (nonatomic, retain) NSMutableArray *legs;

+ (Class)legType;

- (void).cxx_destruct;
- (void)addLeg:(id)arg1;
- (void)clearLegs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)legAtIndex:(unsigned long long)arg1;
- (id)legs;
- (unsigned long long)legsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
