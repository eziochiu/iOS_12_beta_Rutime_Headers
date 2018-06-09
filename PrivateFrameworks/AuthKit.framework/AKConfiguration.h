/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKConfiguration : NSObject {
    NSMutableDictionary * _cachedSettings;
    int  _notificationToken;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic, copy) NSDate *lastCheckInAttemptDate;
@property (nonatomic, copy) NSDate *lastCheckInSuccessDate;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldDisablePETs;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)lastCheckInAttemptDate;
- (id)lastCheckInSuccessDate;
- (unsigned long long)lastKnownIDMSEnvironment;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (void)setLastCheckInAttemptDate:(id)arg1;
- (void)setLastCheckInSuccessDate:(id)arg1;
- (void)setLastKnownIDMSEnvironment:(unsigned long long)arg1;
- (void)setShouldAddHSA2CreateHeader:(long long)arg1;
- (void)setShouldAllowExperimentalMode:(long long)arg1;
- (void)setShouldAllowPhoneNumberAccounts:(long long)arg1;
- (void)setShouldDisablePETs:(long long)arg1;
- (void)setShouldDisablePiggybacking:(long long)arg1;
- (void)setShouldFakeAuthSuccess:(long long)arg1;
- (void)setShouldSuppressHSA2Suggestions:(long long)arg1;
- (void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1;
- (long long)shouldAddHSA2CreateHeader;
- (long long)shouldAllowExperimentalMode;
- (long long)shouldAllowPhoneNumberAccounts;
- (long long)shouldDisablePETs;
- (long long)shouldDisablePiggybacking;
- (long long)shouldFakeAuthSuccess;
- (long long)shouldSuppressHSA2Suggestions;
- (long long)shouldSuppressModalSheetsInMacBuddy;

@end
