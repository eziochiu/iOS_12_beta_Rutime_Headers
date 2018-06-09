/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPNavigationSession : NSObject {
    CPMapTemplate * _mapTemplate;
    <CPNavigationSessionProviding> * _provider;
    CPTrip * _trip;
    NSArray * _upcomingManeuvers;
}

@property (nonatomic) CPMapTemplate *mapTemplate;
@property (nonatomic, retain) <CPNavigationSessionProviding> *provider;
@property (nonatomic, retain) CPTrip *trip;
@property (nonatomic, copy) NSArray *upcomingManeuvers;

- (void).cxx_destruct;
- (id)_currentTripId;
- (void)cancelTrip;
- (void)finishTrip;
- (id)initWithTrip:(id)arg1 provider:(id)arg2 mapTemplate:(id)arg3;
- (id)mapTemplate;
- (void)pauseTripForReason:(unsigned long long)arg1;
- (id)provider;
- (void)setMapTemplate:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setTrip:(id)arg1;
- (void)setUpcomingManeuvers:(id)arg1;
- (id)trip;
- (id)upcomingManeuvers;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;

@end
