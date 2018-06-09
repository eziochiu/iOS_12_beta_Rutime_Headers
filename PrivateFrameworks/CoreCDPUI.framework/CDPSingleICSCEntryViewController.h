/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPSingleICSCEntryViewController : PSKeychainSyncSecurityCodeController

- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (void)forgotSecurityCode;
- (void)viewDidDisappear:(bool)arg1;

@end
