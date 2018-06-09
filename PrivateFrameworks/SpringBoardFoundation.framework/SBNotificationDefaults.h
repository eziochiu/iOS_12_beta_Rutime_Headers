/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool alwaysPerformDefaultAction;
@property (nonatomic, retain) NSArray *displayIDsWithBadgingEnabled;
@property (nonatomic, readonly) bool dontSuppressForPrivacyWhenUnlocked;
@property (nonatomic, readonly) NSArray *legacyAlarmList;
@property (nonatomic, readonly) bool shouldTestBannerPlayTextTone;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;

@end
