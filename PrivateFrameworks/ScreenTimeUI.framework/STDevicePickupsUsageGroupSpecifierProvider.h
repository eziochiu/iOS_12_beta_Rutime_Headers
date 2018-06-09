/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDevicePickupsUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    PSSpecifier * _pickupsAfterBedtimeSpecifier;
    PSSpecifier * _pickupsSummaryGraphSpecifier;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
}

@property (nonatomic, retain) PSSpecifier *pickupsAfterBedtimeSpecifier;
@property (nonatomic, retain) PSSpecifier *pickupsSummaryGraphSpecifier;
@property (nonatomic, retain) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;

- (void).cxx_destruct;
- (id)getPickupInfo:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)mostPickups:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickupFrequency:(id)arg1;
- (id)pickupsAfterBedtime:(id)arg1;
- (id)pickupsAfterBedtimeSpecifier;
- (id)pickupsSummaryGraphSpecifier;
- (void)setPickupsAfterBedtimeSpecifier:(id)arg1;
- (void)setPickupsSummaryGraphSpecifier:(id)arg1;
- (void)setTimeAllowancesCoordinator:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)timeAllowancesCoordinator;

@end
