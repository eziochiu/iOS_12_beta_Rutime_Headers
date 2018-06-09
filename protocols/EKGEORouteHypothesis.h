/* made by EzioChiu.
 */

@protocol EKGEORouteHypothesis <NSObject>

@required

- (NSDate *)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (NSDate *)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned long long)currentTrafficDensity;
- (double)estimatedTravelTime;
- (NSString *)routeName;
- (void)setAggressiveDepartureDate:(NSDate *)arg1;
- (void)setAggressiveTravelTime:(double)arg1;
- (void)setConservativeDepartureDate:(NSDate *)arg1;
- (void)setConservativeTravelTime:(double)arg1;
- (void)setCurrentTrafficDensity:(unsigned long long)arg1;
- (void)setEstimatedTravelTime:(double)arg1;
- (void)setRouteName:(NSString *)arg1;
- (void)setSuggestedDepartureDate:(NSDate *)arg1;
- (void)setSupportsLiveTraffic:(bool)arg1;
- (void)setTrafficDensityDescription:(NSString *)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelState:(long long)arg1;
- (NSDate *)suggestedDepartureDate;
- (bool)supportsLiveTraffic;
- (NSString *)trafficDensityDescription;
- (int)transportType;
- (long long)travelState;

@end
