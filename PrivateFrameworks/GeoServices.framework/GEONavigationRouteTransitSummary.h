/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {
    NSMutableArray * _possibleStops;
    NSMutableArray * _scheduledLinks;
}

@property (nonatomic, retain) NSMutableArray *possibleStops;
@property (nonatomic, retain) NSMutableArray *scheduledLinks;

+ (Class)possibleStopType;
+ (Class)scheduledLinkType;

- (void).cxx_destruct;
- (void)addPossibleStop:(id)arg1;
- (void)addScheduledLink:(id)arg1;
- (void)clearPossibleStops;
- (void)clearScheduledLinks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)possibleStopAtIndex:(unsigned long long)arg1;
- (id)possibleStops;
- (unsigned long long)possibleStopsCount;
- (bool)readFrom:(id)arg1;
- (id)scheduledLinkAtIndex:(unsigned long long)arg1;
- (id)scheduledLinks;
- (unsigned long long)scheduledLinksCount;
- (void)setPossibleStops:(id)arg1;
- (void)setScheduledLinks:(id)arg1;
- (void)writeTo:(id)arg1;

@end
