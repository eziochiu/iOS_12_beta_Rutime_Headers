/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {
    NSMutableArray * _paths;
    NSString * _segmentName;
    NSString * _ticketingUrl;
}

@property (nonatomic, readonly) bool hasSegmentName;
@property (nonatomic, readonly) bool hasTicketingUrl;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) NSString *segmentName;
@property (nonatomic, retain) NSString *ticketingUrl;

+ (Class)pathType;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (void)clearPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSegmentName;
- (bool)hasTicketingUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)paths;
- (unsigned long long)pathsCount;
- (bool)readFrom:(id)arg1;
- (id)segmentName;
- (void)setPaths:(id)arg1;
- (void)setSegmentName:(id)arg1;
- (void)setTicketingUrl:(id)arg1;
- (id)ticketingUrl;
- (void)writeTo:(id)arg1;

@end
