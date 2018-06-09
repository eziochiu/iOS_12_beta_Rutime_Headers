/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNTrafficIncidentAlert * _activeAlert;
    NSTimer * _alertRetryTimer;
    <MNTrafficIncidentAlertUpdaterDelegate> * _delegate;
    bool  _isSpeakingAlert;
    MNLocation * _lastLocation;
    MNTrafficIncidentAlert * _pendingAlert;
    int  _trafficIncidentStatus;
}

@property (nonatomic) <MNTrafficIncidentAlertUpdaterDelegate> *delegate;

- (void).cxx_destruct;
- (void)_activateAlertForLocation:(id)arg1;
- (void)_alertRetryTimerFired:(id)arg1;
- (void)_removeActiveAlert;
- (void)_updateAlertDistanceAndETA:(id)arg1;
- (void)clearAlerts;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)updateForAlertFromResponse:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateRerouteProposalStatusForRequest:(id)arg1;

@end
