/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) NSArray *countryCodesShowingEmergencyOnlyStatus;
@property (nonatomic, readonly) bool showBatteryLevel;
@property (nonatomic, readonly) bool showBatteryPercentage;
@property (nonatomic, readonly) bool showOptimalCellDataForCarPlay;
@property (nonatomic, readonly) bool showRSSI;
@property (nonatomic, readonly) bool showTapToRadarForCarPlay;
@property (nonatomic, readonly) bool showThermalWarning;
@property (nonatomic, readonly) unsigned long long statusBarLogLevel;
@property (nonatomic, readonly) bool suppressStatusBarOverrideForScreenSharing;

- (void)_bindAndRegisterDefaults;

@end
