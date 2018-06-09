/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVConnectivity : PBCodable <NSCopying> {
    NSMutableArray * _junctions;
}

@property (nonatomic, retain) NSMutableArray *junctions;

- (void).cxx_destruct;
- (void)addJunction:(id)arg1;
- (void)clearJunctions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)junctionAtIndex:(unsigned long long)arg1;
- (id)junctions;
- (unsigned long long)junctionsCount;
- (bool)readFrom:(id)arg1;
- (void)setJunctions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
