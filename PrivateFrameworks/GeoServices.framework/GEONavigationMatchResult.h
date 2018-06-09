/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationMatchResult : NSObject {
    GEONavigationMatchInfo * _detailedMatchInfo;
    bool  _locationUnreliable;
    GEOLocation * _rawLocation;
    GEORoadMatch * _roadMatch;
    GEORouteMatch * _routeMatch;
    unsigned long long  _type;
}

@property (nonatomic, readonly) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readonly) bool locationUnreliable;
@property (nonatomic, readonly) GEOLocation *rawLocation;
@property (nonatomic, readonly) GEORoadMatch *roadMatch;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) unsigned long long type;

+ (id)matchResultWithRawLocation:(id)arg1;
+ (id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2;
+ (id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2;

- (void).cxx_destruct;
- (id)detailedMatchInfo;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRoadMatch:(id)arg1 location:(id)arg2;
- (id)initWithRouteMatch:(id)arg1 location:(id)arg2;
- (bool)locationUnreliable;
- (id)rawLocation;
- (id)roadMatch;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setRouteMatch:(id)arg1;
- (unsigned long long)type;

@end
