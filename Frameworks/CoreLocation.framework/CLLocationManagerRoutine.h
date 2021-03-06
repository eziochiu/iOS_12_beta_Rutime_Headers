/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerRoutine : NSObject {
    _CLLocationManagerRoutineProxy * _locationManagerRoutineProxy;
}

@property (nonatomic) <CLLocationManagerRoutineDelegate> *delegate;
@property (nonatomic, retain) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;

- (void)dealloc;
- (id)delegate;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (id)locationManagerRoutineProxy;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerRoutineProxy:(id)arg1;
- (void)startUpdatingLocation;
- (void)startUpdatingPredictedApplications;
- (void)stopUpdatingLocation;
- (void)stopUpdatingPredictedApplications;

@end
