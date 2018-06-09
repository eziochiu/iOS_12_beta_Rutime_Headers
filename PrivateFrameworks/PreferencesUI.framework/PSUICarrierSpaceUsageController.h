/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierSpaceUsageController : PSListController

- (id)barGraphColors;
- (id)callsDescription:(id)arg1;
- (void)carrierSpaceChanged;
- (id)dataUsageDescription:(id)arg1;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;
- (bool)hasMultipleDevicesOfTheSameType;
- (bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;
- (bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)messagesDescription:(id)arg1;
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;
- (id)remainingCreditDescription:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowCalls:(id)arg1;
- (bool)shouldShowData:(id)arg1;
- (bool)shouldShowMessages:(id)arg1;
- (bool)shouldShowPlanSection:(id)arg1;
- (bool)shouldShowRemainingCredit:(id)arg1;
- (void)simStatusChanged;
- (id)specifiers;
- (id)usageCategories;
- (id)usageGraphSpecifierForSection:(id)arg1;
- (id)usageSections;
- (void)viewDidAppear:(bool)arg1;

@end
