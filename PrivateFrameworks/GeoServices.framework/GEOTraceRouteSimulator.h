/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraceRouteSimulator : NSObject {
    double  _deltaT;
    struct { 
        double latitude; 
        double longitude; 
    }  _destination;
    double  _duration;
    double  _horizontalAccuracy;
    NSArray * _locations;
    NSMutableArray * _mutableLocations;
    struct { 
        double latitude; 
        double longitude; 
    }  _origin;
    NSDictionary * _pointTimestamps;
    GEOComposedRoute * _route;
    NSDate * _startTime;
    double  _verticalAccuracy;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingEnd;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingStart;
}

@property (nonatomic) double deltaT;
@property (nonatomic) struct { double x1; double x2; } destination;
@property (nonatomic) double duration;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic, retain) NSMutableArray *mutableLocations;
@property (nonatomic) struct { double x1; double x2; } origin;
@property (nonatomic, readonly) NSDictionary *pointTimestamps;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) struct { double x1; double x2; } walkingEnd;
@property (nonatomic) struct { double x1; double x2; } walkingStart;

- (void).cxx_destruct;
- (void)addLocation:(struct { double x1; double x2; })arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5;
- (double)deltaT;
- (struct { double x1; double x2; })destination;
- (double)duration;
- (double)estimateDuration;
- (void)generateLocations;
- (void)generateLocationsWithSpeedOverride:(double)arg1;
- (double)horizontalAccuracy;
- (id)initWithRoute:(id)arg1;
- (id)locations;
- (id)mutableLocations;
- (struct { double x1; double x2; })origin;
- (id)pointTimestamps;
- (id)route;
- (void)setDeltaT:(double)arg1;
- (void)setDestination:(struct { double x1; double x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLocations:(id)arg1;
- (void)setMutableLocations:(id)arg1;
- (void)setOrigin:(struct { double x1; double x2; })arg1;
- (void)setStartTime:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setWalkingEnd:(struct { double x1; double x2; })arg1;
- (void)setWalkingStart:(struct { double x1; double x2; })arg1;
- (void)simulateWalkingFrom:(struct { double x1; double x2; })arg1 to:(struct { double x1; double x2; })arg2;
- (id)startTime;
- (double)verticalAccuracy;
- (struct { double x1; double x2; })walkingEnd;
- (struct { double x1; double x2; })walkingStart;

@end
