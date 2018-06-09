/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPrintMessageAndSpinnerView : UIView {
    NSArray * _currentHorizontalConstraints;
    UILabel * _label;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) NSArray *currentHorizontalConstraints;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *messageText;
@property (nonatomic) bool spinSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) bool spinnerHidden;

- (void).cxx_destruct;
- (id)currentHorizontalConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)messageText;
- (void)setCurrentHorizontalConstraints:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setSpinSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerHidden:(bool)arg1;
- (bool)spinSpinner;
- (id)spinner;
- (bool)spinnerHidden;
- (void)updateConstraints;
- (void)updateFont;

@end
