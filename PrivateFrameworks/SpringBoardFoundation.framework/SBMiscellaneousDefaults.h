/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float backlightLevel;
@property (nonatomic) long long dataPlanActivationPromptCount;
@property (nonatomic, readonly) NSArray *fakeDuetTriggers;
@property (nonatomic) bool suppressAlertsForKeynote;
@property (nonatomic, readonly) bool suppressNoSimAlert;
@property (nonatomic, readonly) bool walletPreArmForceLockButton;

- (void)_bindAndRegisterDefaults;

@end
