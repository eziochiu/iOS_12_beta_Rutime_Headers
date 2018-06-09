/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocationTracker : NSObject {
    GEOApplicationAuditToken * _auditToken;
    MNLocation * _lastMatchedLocation;
    bool  _localizeRoadNames;
    MNNavigationSession * _navigationSession;
    MNObserverHashTable * _safeDelegate;
    int  _state;
}

@property (getter=_auditToken, setter=_setAuditToken:, nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) bool hasArrived;
@property (nonatomic, readonly) MNLocation *lastMatchedLocation;
@property (nonatomic, readonly) MNNavigationSession *navigationSession;
@property (nonatomic, readonly) MNObserverHashTable *safeDelegate;
@property (nonatomic, readonly) bool shouldProjectAlongRoute;
@property (setter=_setState:, nonatomic) int state;
@property (nonatomic, readonly) int transportType;

- (void).cxx_destruct;
- (id)_auditToken;
- (bool)_checkArrivalForLocation:(id)arg1;
- (bool)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3;
- (void)_defaultsDidChange;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)_roadFeaturesForFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)arg1 outRoadName:(id*)arg2 outShieldText:(id*)arg3 outShieldType:(long long*)arg4;
- (void)_setAuditToken:(id)arg1;
- (void)_setState:(int)arg1;
- (void)_switchedToStepAtIndex:(unsigned long long)arg1;
- (void)_updateMatchedLocation:(id)arg1;
- (void)_updateShouldLocalizeRoadNames;
- (void)dealloc;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;
- (bool)hasArrived;
- (id)init;
- (id)initWithNavigationSession:(id)arg1;
- (id)lastMatchedLocation;
- (id)matchedLocationForLocation:(id)arg1;
- (id)navigationSession;
- (void)pause;
- (bool)paused;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)resume;
- (id)safeDelegate;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowPause;
- (bool)shouldProjectAlongRoute;
- (void)startTracking;
- (int)state;
- (void)stopTracking;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)traceJumpedInTime;
- (void)tracePaused;
- (int)transportType;
- (void)updateDestination:(id)arg1 finishedHandler:(id /* block */)arg2;
- (void)updateLocation:(id)arg1;
- (void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;

@end
