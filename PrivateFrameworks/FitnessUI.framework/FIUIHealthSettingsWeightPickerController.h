/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDataSource, UIPickerViewDelegate> {
    id /* block */  _weightUpdateHandler;
    long long  numberOfComponents;
    long long  numberOfRows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ weightUpdateHandler;

- (void).cxx_destruct;
- (void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg1;
- (void)_updateWithWeightQuantity:(id)arg1;
- (id)_weightDisplayStringForRow:(long long)arg1;
- (double)_weightInLocaleUnitForRow:(long long)arg1;
- (id)_weightQuantityForRow:(long long)arg1;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setWeightQuantity:(id)arg1;
- (void)setWeightUpdateHandler:(id /* block */)arg1;
- (id /* block */)weightUpdateHandler;

@end
