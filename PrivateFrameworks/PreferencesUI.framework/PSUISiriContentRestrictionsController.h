/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISiriContentRestrictionsController : PSListController {
    NSString * _cachedCountryCode;
}

- (void).cxx_destruct;
- (void)_continueInitialization;
- (void)_countryCodeDidChange:(id)arg1;
- (void)_updateCountryCodeOnMainThread;
- (void)dealloc;
- (id)featureValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)reversedBoolFeatureValue:(id)arg1;
- (void)setFeatureValue:(id)arg1 specifier:(id)arg2;
- (void)setReversedBoolFeatureValue:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
