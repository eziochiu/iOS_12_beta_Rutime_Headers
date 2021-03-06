/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNDriveGuidanceManager : MNClassicGuidanceManager {
    int  _currentContinuePhase;
}

- (const struct { double x1; double x2; double x3; }*)_announceSettings;
- (int)_continuePhase;
- (double)_distanceForSign;
- (id)_nameInfoForContinueSign;
- (void)_resetStepState;
- (bool)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (bool)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (void)_updatePrepareForNextStep;
- (int)transportType;

@end
