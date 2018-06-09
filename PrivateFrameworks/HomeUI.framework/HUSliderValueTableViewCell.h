/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol> {
    NSArray * _constraints;
    <HUSliderValueTableViewCellDelegate> * _delegate;
    bool  _showValue;
    UISlider * _slider;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSliderValueTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumValue;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic) double minimumValue;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (nonatomic) bool showValue;
@property (nonatomic, retain) UISlider *slider;
@property (readonly) Class superclass;
@property (nonatomic) double value;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_setupAutoLayoutConstraints;
- (void)_sliderChanged:(id)arg1;
- (id)constraints;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isContinuous;
- (bool)isDisabled;
- (double)maximumValue;
- (id)maximumValueImage;
- (double)minimumValue;
- (id)minimumValueImage;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setContinuous:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setSlider:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setValueLabel:(id)arg1;
- (bool)showValue;
- (id)slider;
- (double)value;
- (id)valueLabel;

@end
