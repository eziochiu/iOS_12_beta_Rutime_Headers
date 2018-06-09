/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {
    GEOPlaceFormattedString * _body;
    GEOFormattedString * _responseAlertPrimary;
    GEOFormattedString * _responseAlertSecondary;
    GEOPlaceFormattedString * _title;
}

@property (nonatomic, retain) GEOPlaceFormattedString *body;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasResponseAlertPrimary;
@property (nonatomic, readonly) bool hasResponseAlertSecondary;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) GEOFormattedString *responseAlertPrimary;
@property (nonatomic, retain) GEOFormattedString *responseAlertSecondary;
@property (nonatomic, retain) GEOPlaceFormattedString *title;

- (void).cxx_destruct;
- (id)body;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasResponseAlertPrimary;
- (bool)hasResponseAlertSecondary;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseAlertPrimary;
- (id)responseAlertSecondary;
- (void)setBody:(id)arg1;
- (void)setResponseAlertPrimary:(id)arg1;
- (void)setResponseAlertSecondary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
