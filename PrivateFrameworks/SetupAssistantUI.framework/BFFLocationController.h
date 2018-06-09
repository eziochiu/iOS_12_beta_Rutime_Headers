/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLocationController : NSObject {
    NSDictionary * _aliasDict;
    bool  _fakeMode;
    NSArray * _firstGuessedLanguages;
    NSArray * _guessedCountries;
    NSString * _guessedCountryFromTelephony;
    NSSet * _validCountries;
    struct __WiFiDeviceClient { } * fWifiDevice;
    struct __WiFiManagerClient { } * fWifiManager;
}

@property (nonatomic) bool fakeMode;
@property (nonatomic, retain) NSArray *firstGuessedLanguages;
@property (nonatomic, retain) NSArray *guessedCountries;

+ (id)sharedBuddyLocationController;

- (void).cxx_destruct;
- (id)_checkForAliases:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkedArrayForString:(id)arg1;
- (void)_closeWifiConnection;
- (id)_countriesFromDefaults;
- (id)_countryFromTelephony;
- (void)_scanComplete:(id)arg1 error:(bool)arg2;
- (void)_setGuessedCountryDefault:(id)arg1;
- (void)_startWifiScan;
- (id)aliasDict;
- (void)dealloc;
- (bool)fakeMode;
- (id)firstGuessedLanguages;
- (bool)getCountryFromTelephony;
- (id)guessedCountries;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (id)init;
- (void)reset;
- (void)setFakeMode:(bool)arg1;
- (void)setFirstGuessedLanguages:(id)arg1;
- (void)setGuessedCountries:(id)arg1;

@end
