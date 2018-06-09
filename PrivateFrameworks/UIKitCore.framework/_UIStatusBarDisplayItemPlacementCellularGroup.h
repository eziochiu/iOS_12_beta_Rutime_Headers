/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup {
    _UIStatusBarDisplayItemPlacement * _callForwardingPlacement;
    _UIStatusBarDisplayItemPlacement * _namePlacement;
    NSArray * _placementsAffectedByAirplaneMode;
    _UIStatusBarDisplayItemPlacement * _signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement * _typePlacement;
    _UIStatusBarDisplayItemPlacement * _warningPlacement;
}

@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *namePlacement;
@property (nonatomic, retain) NSArray *placementsAffectedByAirplaneMode;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *typePlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *warningPlacement;

- (void).cxx_destruct;
- (id)callForwardingPlacement;
- (id)namePlacement;
- (id)placementsAffectedByAirplaneMode;
- (void)setCallForwardingPlacement:(id)arg1;
- (void)setNamePlacement:(id)arg1;
- (void)setPlacementsAffectedByAirplaneMode:(id)arg1;
- (void)setSignalStrengthPlacement:(id)arg1;
- (void)setTypePlacement:(id)arg1;
- (void)setWarningPlacement:(id)arg1;
- (id)signalStrengthPlacement;
- (id)typePlacement;
- (id)warningPlacement;

@end
