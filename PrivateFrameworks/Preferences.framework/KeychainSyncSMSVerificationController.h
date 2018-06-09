/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {
    NSString * _countryCode;
    NSString * _dialingPrefix;
    UIButton * _footerButton;
    PSKeychainSyncManager * _keychainSyncManager;
    NSString * _phoneNumber;
}

@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *dialingPrefix;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSKeychainSyncManager *keychainSyncManager;
@property (nonatomic, retain) NSString *phoneNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)countryCode;
- (id)dialingPrefix;
- (void)dismissAlerts;
- (id)init;
- (id)keychainSyncManager;
- (void)loadView;
- (id)phoneNumber;
- (void)setCountryCode:(id)arg1;
- (void)setDialingPrefix:(id)arg1;
- (void)setKeychainSyncManager:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)showSupportVerification;
- (id)specifiers;
- (void)viewDidLayoutSubviews;

@end
