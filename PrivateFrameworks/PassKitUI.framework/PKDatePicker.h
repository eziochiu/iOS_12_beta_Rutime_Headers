/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePicker : UIView {
    NSDate * _date;
    <PKDatePickerDelegate> * _delegate;
    struct UIView { Class x1; } * _internalPicker;
    bool  _representsCardExpiration;
    bool  _showsDay;
    bool  _showsMonth;
    bool  _showsYear;
    bool  _usesDarkAppearance;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <PKDatePickerDelegate> *delegate;
@property (nonatomic, readonly) bool representsCardExpiration;
@property (nonatomic, readonly) bool showsDay;
@property (nonatomic, readonly) bool showsMonth;
@property (nonatomic, readonly) bool showsYear;
@property (nonatomic) bool usesDarkAppearance;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (Class)_classForDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 representingCardExpiration:(bool)arg4;
- (void)_dateValueChanged:(struct UIView { Class x1; }*)arg1;
- (void)_forceReloadInternalPicker;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 representingCardExpiration:(bool)arg4;
- (bool)representsCardExpiration;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUsesDarkAppearance:(bool)arg1;
- (bool)showsDay;
- (bool)showsMonth;
- (bool)showsYear;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesDarkAppearance;

@end