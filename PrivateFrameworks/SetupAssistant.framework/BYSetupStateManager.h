/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (id)buddyPrefsValueForKey:(id)arg1;
- (void)clearRestoreType;
- (bool)didRestoreFromBackup;
- (bool)didSetupUsingiTunes;
- (void)recordLanguageSelectedUsingBuddy;
- (void)recordSetupUsingBuddy;
- (long long)restoreType;

@end