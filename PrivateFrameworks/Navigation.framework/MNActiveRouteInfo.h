/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNActiveRouteInfo : NSObject <NSSecureCoding> {
    unsigned long long  _alternateRouteIndex;
    NSDate * _displayETA;
    unsigned long long  _displayRemainingMinutes;
    GEOETARoute * _etaRoute;
    GEOComposedRoute * _route;
    NSUUID * _routeID;
    NSArray * _routeIncidents;
    GEORouteInitializerData * _routeInitializerData;
}

@property (nonatomic) unsigned long long alternateRouteIndex;
@property (nonatomic, retain) NSDate *displayETA;
@property (nonatomic) unsigned long long displayRemainingMinutes;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *etaResponse;
@property (nonatomic, retain) GEOETARoute *etaRoute;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, retain) NSArray *routeIncidents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)alternateRouteIndex;
- (id)displayETA;
- (unsigned long long)displayRemainingMinutes;
- (void)encodeWithCoder:(id)arg1;
- (id)etaResponse;
- (id)etaRoute;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)route;
- (id)routeID;
- (id)routeIncidents;
- (void)setAlternateRouteIndex:(unsigned long long)arg1;
- (void)setDisplayETA:(id)arg1;
- (void)setDisplayRemainingMinutes:(unsigned long long)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteIncidents:(id)arg1;
- (void)updateWithETARoute:(id)arg1 offsetInMeters:(double)arg2;

@end
