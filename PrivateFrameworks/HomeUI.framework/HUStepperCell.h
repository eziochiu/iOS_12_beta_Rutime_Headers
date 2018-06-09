/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol> {
    bool  _disabled;
    HFItem * _item;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    UIStepper * _stepper;
    <HUStepperCellDelegate> * _stepperCellDelegate;
    NSNumber * _stepperValue;
    UILabel * _valueLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, copy) NSNumber *stepValue;
@property (nonatomic, retain) UIStepper *stepper;
@property (nonatomic) <HUStepperCellDelegate> *stepperCellDelegate;
@property (nonatomic, copy) NSNumber *stepperValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_stepperValueDidChange:(id)arg1;
- (void)_toggleValueChange:(id)arg1;
- (id)_valueDescription;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (id)maximumValue;
- (id)minimumValue;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setStepValue:(id)arg1;
- (void)setStepper:(id)arg1;
- (void)setStepperCellDelegate:(id)arg1;
- (void)setStepperValue:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (id)stepValue;
- (id)stepper;
- (id)stepperCellDelegate;
- (id)stepperValue;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)valueLabel;

@end
