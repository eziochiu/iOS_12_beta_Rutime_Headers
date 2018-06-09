/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    id /* block */  _changeBlock;
    long long  _frequency;
    long long  _interval;
    bool  _maximumInterval;
    UIPickerView * _pickerView;
}

@property (copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interval;
@property (nonatomic) bool maximumInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (long long)frequency;
- (id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(id /* block */)arg3;
- (long long)interval;
- (void)loadView;
- (bool)maximumInterval;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setChangeBlock:(id /* block */)arg1;
- (void)setFrequency:(long long)arg1;
- (void)setInterval:(long long)arg1;
- (void)setMaximumInterval:(bool)arg1;
- (void)viewDidLoad;

@end
