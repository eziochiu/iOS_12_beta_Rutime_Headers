/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) bool alertInviteeDeclines;
@property (nonatomic) bool alwaysSetArrivedAndSettledForReminders;
@property (readonly) bool bypassSplashScreen;
@property (nonatomic, retain) NSArray *deselectedCalendarIdentifiers;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (nonatomic) bool refiringReminderAlarmsEnabled;
@property (nonatomic) bool remindMeAboutThisInCalendarWidgetEnabled;
@property (nonatomic, retain) NSArray *selectedCalendarIdentifiers;
@property (nonatomic) bool showDeclinedEvents;
@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) bool useShortReminderRefireInterval;
@property (nonatomic) bool useShortReminderSnoozeInterval;

+ (id)shared;

- (void).cxx_destruct;
- (bool)alertInviteeDeclines;
- (bool)alwaysSetArrivedAndSettledForReminders;
- (bool)bypassSplashScreen;
- (id)deselectedCalendarIdentifiers;
- (id)deselectedCalendarSyncHashes;
- (id)init;
- (unsigned long long)lastConfirmedSplashScreenVersion;
- (bool)refiringReminderAlarmsEnabled;
- (bool)remindMeAboutThisInCalendarWidgetEnabled;
- (id)selectedCalendarIdentifiers;
- (void)setAlertInviteeDeclines:(bool)arg1;
- (void)setAlwaysSetArrivedAndSettledForReminders:(bool)arg1;
- (void)setDeselectedCalendarIdentifiers:(id)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setLastConfirmedSplashScreenVersion:(unsigned long long)arg1;
- (void)setRefiringReminderAlarmsEnabled:(bool)arg1;
- (void)setRemindMeAboutThisInCalendarWidgetEnabled:(bool)arg1;
- (void)setSelectedCalendarIdentifiers:(id)arg1;
- (void)setShowDeclinedEvents:(bool)arg1;
- (void)setTravelEngineThrottlePeriod:(double)arg1;
- (void)setUseShortReminderRefireInterval:(bool)arg1;
- (void)setUseShortReminderSnoozeInterval:(bool)arg1;
- (bool)showDeclinedEvents;
- (double)travelEngineThrottlePeriod;
- (bool)useShortReminderRefireInterval;
- (bool)useShortReminderSnoozeInterval;

@end
