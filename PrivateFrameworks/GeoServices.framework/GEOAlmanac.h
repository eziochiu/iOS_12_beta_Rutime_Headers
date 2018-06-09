/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanac : NSObject {
    GEOAlmanacRiseTransitSet * _currentRiseTransitSet;
    GEOAlmanacRiseTransitSet * _nextRiseTransitSet;
    GEOAlmanacRiseTransitSet * _previousRiseTransitSet;
}

@property (nonatomic, readonly) bool isDayLight;
@property (nonatomic, readonly) NSDate *nextSunrise;
@property (nonatomic, readonly) NSDate *nextSunset;
@property (nonatomic, readonly) NSDate *nextTransit;
@property (nonatomic, readonly) NSDate *previousSunrise;
@property (nonatomic, readonly) NSDate *previousSunset;
@property (nonatomic, readonly) NSDate *previousTransit;
@property (nonatomic, readonly) NSDate *sunrise;
@property (nonatomic, readonly) NSDate *sunset;
@property (nonatomic, readonly) NSDate *transit;

- (void).cxx_destruct;
- (id)_newRiseTransitSetForLocation:(struct { double x1; double x2; })arg1 julianDay:(double)arg2 altitude:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(struct { double x1; double x2; })arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3;
- (void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 date:(id)arg4;
- (bool)isDayLight;
- (bool)isDayLightForDate:(id)arg1;
- (bool)isDayLightForTime:(double)arg1;
- (id)nextSunrise;
- (id)nextSunset;
- (id)nextTransit;
- (id)previousSunrise;
- (id)previousSunset;
- (id)previousTransit;
- (id)sortedTimesForDate:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)transit;

@end