/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAdvertisingRestrictionsController : PSUIAdvertisingController {
    PSSpecifier * _allowedGroup;
    id  _effectiveSettingsChangedObserver;
    id  _restrictionsChangedObserver;
}

@property (nonatomic, retain) id effectiveSettingsChangedObserver;
@property (nonatomic, retain) id restrictionsChangedObserver;

- (void).cxx_destruct;
- (id)effectiveSettingsChangedObserver;
- (id)featureValue:(id)arg1;
- (id)restrictionsChangedObserver;
- (void)setEffectiveSettingsChangedObserver:(id)arg1;
- (void)setFeatureValue:(id)arg1 specifier:(id)arg2;
- (void)setRestrictionsChangedObserver:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
