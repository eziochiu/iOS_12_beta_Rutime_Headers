/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface ProblemReportingController : PSListController {
    PrefsUILinkLabel * _aboutDiagnosticsLinkLabel;
    NSArray * _appActivitySpecifiers;
    PSSpecifier * _filesystemMetadataSnapshotSpecifier;
    NSArray * _healthDataSpecifiers;
    NSArray * _healthRecordsDataSpecifiers;
    HKHealthStore * _healthStore;
    NSArray * _iCloudSpecifiers;
    bool  _shouldShareHealthRecordsData;
    PSSpecifier * _spinnerSpecifier;
    NSArray * _wheelchairDataSpecifiers;
}

@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) NSArray *healthRecordsDataSpecifiers;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic) bool shouldShareHealthRecordsData;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) NSArray *wheelchairDataSpecifiers;

+ (bool)isProblemReportingEnabled;

- (void).cxx_destruct;
- (void)_handleUpdateForSpecifierID:(id)arg1 value:(id)arg2 error:(id)arg3;
- (id)appActivitySpecifiers;
- (void)checkDiagnosticsSessionAvailability;
- (void)dismissAboutSheet:(id)arg1;
- (id)filesystemMetadataSnapshotSpecifier;
- (id)healthDataSpecifiers;
- (id)healthRecordsDataSpecifiers;
- (id)healthStore;
- (id)iCloudSpecifiers;
- (void)launchDiagnosticsSession:(id)arg1;
- (id)problemReportingEnabled:(id)arg1;
- (void)setBoolValue:(bool)arg1 forIdMSConfigKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setProblemReportingEnabled:(bool)arg1;
- (void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareHealthRecordsData:(bool)arg1;
- (void)setShouldShareHealthRecordsData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
- (bool)shouldShareHealthRecordsData;
- (id)shouldShareHealthRecordsDataForSpecifier:(id)arg1;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
- (id)shouldShareiCloudAnalytics:(id)arg1;
- (bool)shouldShowiCloudSpecifiersForAccount:(id)arg1;
- (void)showAboutAnalyticsSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutHealthRecordsDataSheet;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)snapshot:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateHealthRecordsPreferenceForSpecifierID:(id)arg1;
- (void)updateiCloudAnalyticsForSpecifierID:(id)arg1;
- (id)wheelchairDataSpecifiers;

@end
