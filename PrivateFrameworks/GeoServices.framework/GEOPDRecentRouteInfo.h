/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {
    NSData * _routeId;
    NSData * _sessionState;
    PBUnknownFields * _unknownFields;
    NSData * _zilchPoints;
}

@property (nonatomic, readonly) bool hasRouteId;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic, retain) NSData *routeId;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *zilchPoints;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteId;
- (bool)hasSessionState;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeId;
- (id)sessionState;
- (void)setRouteId:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
