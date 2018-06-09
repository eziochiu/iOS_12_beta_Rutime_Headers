/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageDetailsViewModel : NSObject {
    NSDictionary * _rawUsageItemsByStartDateByIdentifier;
    NSString * _selectedItemDisplayName;
    unsigned long long  _selectedTimePeriod;
    STUsageReport * _todayUsageReport;
    STUsageReport * _weekUsageReport;
}

@property (nonatomic, copy) NSDictionary *rawUsageItemsByStartDateByIdentifier;
@property (nonatomic, copy) NSString *selectedItemDisplayName;
@property unsigned long long selectedTimePeriod;
@property (nonatomic, readonly) STUsageReport *selectedUsageReport;
@property (nonatomic, copy) STUsageReport *todayUsageReport;
@property (nonatomic, copy) STUsageReport *weekUsageReport;

+ (id)keyPathsForValuesAffectingSelectedPickupInfo;
+ (id)keyPathsForValuesAffectingSelectedUsageReport;

- (void).cxx_destruct;
- (id)init;
- (id)rawUsageItemsByStartDateByIdentifier;
- (id)selectedItemDisplayName;
- (unsigned long long)selectedTimePeriod;
- (id)selectedUsageReport;
- (void)setRawUsageItemsByStartDateByIdentifier:(id)arg1;
- (void)setSelectedItemDisplayName:(id)arg1;
- (void)setSelectedTimePeriod:(unsigned long long)arg1;
- (void)setTodayUsageReport:(id)arg1;
- (void)setWeekUsageReport:(id)arg1;
- (id)todayUsageReport;
- (id)weekUsageReport;

@end
