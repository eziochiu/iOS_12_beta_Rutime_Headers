/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int routingIncidentMessageIndex : 1; 
    }  _has;
    unsigned int  _routingIncidentMessageIndex;
    NSString * _routingMessage;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transitIncidentIndexs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRoutingIncidentMessageIndex;
@property (nonatomic, readonly) bool hasRoutingMessage;
@property (nonatomic) unsigned int routingIncidentMessageIndex;
@property (nonatomic, retain) NSString *routingMessage;
@property (nonatomic, readonly) unsigned int*transitIncidentIndexs;
@property (nonatomic, readonly) unsigned long long transitIncidentIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingIncidentMessageIndex;
- (bool)hasRoutingMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routingIncidentMessageIndex;
- (id)routingMessage;
- (void)setHasRoutingIncidentMessageIndex:(bool)arg1;
- (void)setRoutingIncidentMessageIndex:(unsigned int)arg1;
- (void)setRoutingMessage:(id)arg1;
- (void)setTransitIncidentIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)transitIncidentIndexs;
- (unsigned long long)transitIncidentIndexsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
