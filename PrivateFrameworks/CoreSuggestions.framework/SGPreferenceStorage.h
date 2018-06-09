/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceStorage : NSObject

+ (bool)allowAgeBasedPruning;
+ (bool)allowGeocode;
+ (bool)alwaysShowCancelledEvents;
+ (id)cloudKitPersistedState;
+ (id)defaults;
+ (id)defaultsForTests;
+ (bool)detectContacts;
+ (bool)detectNLEvents;
+ (bool)detectStructuredEvents;
+ (long long)hashedSessionsLogging;
+ (long long)messagesToProcessImmediately;
+ (bool)onlyShowSignificantNLEvents;
+ (bool)onlyShowSignificantPseudoContacts;
+ (int)registerBlockOnSuggestionsSettingsChange:(id /* block */)arg1;
+ (void)removeDeprecatedDefaults;
+ (void)resetAllPreferences;
+ (void)setAllowAgeBasedPruning:(bool)arg1;
+ (void)setAllowGeocode:(bool)arg1;
+ (void)setAllowGeocodeForTests:(bool)arg1;
+ (void)setAlwaysShowCancelledEvents:(bool)arg1;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (void)setContactsDetectionEnabledForTests:(bool)arg1;
+ (void)setDetectContacts:(bool)arg1;
+ (void)setDetectNLEvents:(bool)arg1;
+ (void)setDetectStructuredEvents:(bool)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(bool)arg1;
+ (void)setFirstPartyMailAppIsInstalled:(bool)arg1;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (void)setHidePastEventsForTests:(bool)arg1;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(bool)arg1;
+ (void)setOnlyShowSignificantNLEvents:(bool)arg1;
+ (void)setOnlyShowSignificantPseudoContacts:(bool)arg1;
+ (void)setProactiveEnabledForTests:(bool)arg1;
+ (void)setShowCancelledEventsForTests:(bool)arg1;
+ (void)setShowContactsFoundInMail:(bool)arg1;
+ (void)setShowContactsFoundInMailForTests:(bool)arg1;
+ (void)setShowEventsFoundInMail:(bool)arg1;
+ (void)setShowEventsFoundInMailForTests:(bool)arg1;
+ (void)setShowPastEvents:(bool)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(bool)arg1;
+ (void)setSyncHistoryToCloud:(bool)arg1;
+ (void)setSyncHistoryToCloudForTests:(bool)arg1;
+ (void)setUseMLModelForContacts:(bool)arg1;
+ (void)setUseMLModelForSelfId:(bool)arg1;
+ (void)setUseMLModelForSelfIdForTests:(bool)arg1;
+ (bool)shouldHarvestEvents;
+ (bool)showContactsFoundInMail;
+ (bool)showEventsFoundInMail;
+ (bool)showPastEvents;
+ (bool)showSuggestionsCalendar;
+ (long long)suggestionsLogLevel;
+ (bool)syncHistoryToCloud;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(bool)arg2;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (bool)useMLModelForContacts;
+ (bool)useMLModelForSelfId;

@end
