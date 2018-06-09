/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DABehaviorOptions : NSObject

+ (id)APSEnv;
+ (bool)CFNetworkLogging;
+ (id)DAManagedDefaultForKey:(id)arg1;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (bool)_shouldForceCookies:(bool*)arg1;
+ (void)_startListeningForNotifications;
+ (bool)addDAManagedDefaults:(id)arg1;
+ (bool)allIMAPServersSupportNotesSearch;
+ (bool)alwaysUseCalendarHomeSync;
+ (bool)babysitterEnabled;
+ (bool)calDAVRemindersForAll;
+ (bool)completelyIgnoreNotes;
+ (bool)compressRequests;
+ (bool)cookiesEnabled;
+ (bool)customAutoDV2UserAgentEnabled;
+ (double)defaultDAVProbeTimeout;
+ (double)defaultEASTaskTimeoutOutWasFound:(bool*)arg1;
+ (bool)earlyPingEnabled;
+ (bool)enablePromptForServerTrust;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (bool)ignoreBadLDAPCerts;
+ (bool)ignoreSupportedCommands;
+ (void)initialize;
+ (bool)isAppleInternalInstall;
+ (bool)isCustomerInstall;
+ (bool)isEASParsingLogEnabled;
+ (bool)isInHoldingPattern;
+ (int)numForgivable401s;
+ (bool)orphanCheckEnabled;
+ (bool)perfLogging;
+ (bool)promptForAllCerts;
+ (int)refreshThrottleTime;
+ (void)removeDAManagedDefaults:(id)arg1;
+ (bool)sendMeCardEverywhere;
+ (bool)setDAManagedDefaults:(id)arg1;
+ (bool)useThunderhillBetaServers;
+ (id)whitelistedEASProtocols;
+ (bool)writeOutBrokenCancelationRequests;

@end
