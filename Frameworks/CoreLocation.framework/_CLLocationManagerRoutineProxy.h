/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSXPCConnection * _connection;
    <CLLocationManagerRoutineDelegate> * _delegate;
    CLLocationManagerRoutine * _locationManagerRoutine;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _updating;
    bool  _updatingPredictedApplications;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLLocationManagerRoutineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (readonly) Class superclass;
@property (nonatomic) bool updating;
@property (nonatomic) bool updatingPredictedApplications;

- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateLocations:(id)arg1;
- (void)didUpdatePredictedApplications:(id)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (id)locationManagerRoutine;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (void)setUpdatingPredictedApplications:(bool)arg1;
- (bool)updating;
- (bool)updatingPredictedApplications;

@end
