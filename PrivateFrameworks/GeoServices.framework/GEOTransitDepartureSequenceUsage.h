/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {
    NSString * _direction;
    struct { 
        unsigned int lineId : 1; 
    }  _has;
    NSString * _headsign;
    unsigned long long  _lineId;
}

@property (nonatomic, retain) NSString *direction;
@property (nonatomic, readonly) bool hasDirection;
@property (nonatomic, readonly) bool hasHeadsign;
@property (nonatomic) bool hasLineId;
@property (nonatomic, retain) NSString *headsign;
@property (nonatomic) unsigned long long lineId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)direction;
- (bool)hasDirection;
- (bool)hasHeadsign;
- (bool)hasLineId;
- (unsigned long long)hash;
- (id)headsign;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHeadsign:(id)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
