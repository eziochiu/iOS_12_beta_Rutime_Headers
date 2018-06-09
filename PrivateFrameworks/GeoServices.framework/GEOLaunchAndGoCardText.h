/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {
    GEOPlaceFormattedString * _body;
    GEOFormattedString * _cardTitle;
    GEOPlaceFormattedString * _commuteTitle;
    GEOFormattedString * _routeDescription;
    GEOFormattedString * _routeTitle;
    GEOPlaceFormattedString * _title;
}

@property (nonatomic, retain) GEOPlaceFormattedString *body;
@property (nonatomic, retain) GEOFormattedString *cardTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *commuteTitle;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasCardTitle;
@property (nonatomic, readonly) bool hasCommuteTitle;
@property (nonatomic, readonly) bool hasRouteDescription;
@property (nonatomic, readonly) bool hasRouteTitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *routeDescription;
@property (nonatomic, retain) GEOFormattedString *routeTitle;
@property (nonatomic, retain) GEOPlaceFormattedString *title;

- (void).cxx_destruct;
- (id)body;
- (id)cardTitle;
- (id)commuteTitle;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasCardTitle;
- (bool)hasCommuteTitle;
- (bool)hasRouteDescription;
- (bool)hasRouteTitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeDescription;
- (id)routeTitle;
- (void)setBody:(id)arg1;
- (void)setCardTitle:(id)arg1;
- (void)setCommuteTitle:(id)arg1;
- (void)setRouteDescription:(id)arg1;
- (void)setRouteTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
