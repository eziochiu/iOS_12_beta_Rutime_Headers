/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteIncident : NSObject <NSSecureCoding> {
    GEORouteIncident * _geoRouteIncident;
    double  _offsetInMeters;
}

@property (nonatomic, readonly) GEORouteIncident *geoRouteIncident;
@property (nonatomic, readonly) double offsetInMeters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)geoRouteIncident;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRouteIncident:(id)arg1 offsetInMeters:(double)arg2;
- (double)offsetInMeters;

@end
