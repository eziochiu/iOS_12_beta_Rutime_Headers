/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDividedGridViewCell : UIView {
    UIColor * _bgColor;
    UITextLabel * _label;
    bool  _selected;
    EKUIDividedGridViewController * _viewController;
    NSLayoutConstraint * _widthConstraint;
}

@property (retain) UITextLabel *label;
@property (nonatomic) bool selected;
@property EKUIDividedGridViewController *viewController;
@property NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBackgroundColor:(id)arg1;
- (id)label;
- (bool)selected;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)viewController;
- (id)widthConstraint;

@end
