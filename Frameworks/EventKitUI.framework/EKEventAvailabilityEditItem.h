/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAvailabilityEditItem : EKEventEditItem {
    long long  _availability;
    unsigned long long  _availabilityIndexInChoices;
    NSArray * _choices;
    unsigned long long  _supportedAvailabilities;
}

- (void).cxx_destruct;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (void)refreshFromCalendarItemAndStore;
- (bool)saveAndDismissWithForce:(bool)arg1;

@end
