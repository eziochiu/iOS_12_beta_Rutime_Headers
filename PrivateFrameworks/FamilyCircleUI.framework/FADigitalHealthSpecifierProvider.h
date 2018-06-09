/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FADigitalHealthSpecifierProvider : NSObject <AAUIAccountManagerDelegate> {
    <FADigitalHealthSpecifierProviderDelegate> * _delegate;
    NSError * _eligibilityError;
    FAFamilyEligibilityRequester * _eligibilityRequester;
    PSListController * _presenter;
    AAFamilyEligibilityResponse * _response;
    NSArray * _specifiers;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FADigitalHealthSpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eligibilitySpecifier;
- (void)_handleEligibilityResponse:(id)arg1 error:(id)arg2;
- (void)_initiateFamily:(id)arg1 withClientName:(id)arg2;
- (void)_reloadSpecifiers;
- (void)_setUpFamilySpecifierWasTapped:(id)arg1;
- (struct NSDictionary { Class x1; }*)accountsForAccountManager:(id)arg1;
- (id)delegate;
- (id)init;
- (id)presenter;
- (void)reloadSpecifiers;
- (void)setDelegate:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)specifiers;

@end
