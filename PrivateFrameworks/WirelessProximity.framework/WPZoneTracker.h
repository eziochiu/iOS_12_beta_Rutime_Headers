/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPZoneTracker : WPClient {
    <WPZoneTrackerDelegate> * _delegate;
    bool  _wantEntry;
    bool  _wantExit;
}

@property (nonatomic) <WPZoneTrackerDelegate> *delegate;
@property (nonatomic) bool wantEntry;
@property (nonatomic) bool wantExit;

- (void).cxx_destruct;
- (id)clientAsString;
- (id)delegate;
- (id)description;
- (void)enteredZone:(id)arg1 manufacturerData:(id)arg2;
- (void)exitedZone:(id)arg1;
- (void)failedToRegisterZones:(id)arg1 withError:(id)arg2;
- (void)fetchedCurrentlyTrackedZones:(id)arg1;
- (void)getCurrentTrackedZones;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWantEntry:(bool)arg1;
- (void)setWantExit:(bool)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)arg1;
- (bool)wantEntry;
- (bool)wantExit;

@end
