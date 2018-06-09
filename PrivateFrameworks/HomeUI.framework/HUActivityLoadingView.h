/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUActivityLoadingView : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    UILabel * _detailTextLabel;
    UIStackView * _mainStackView;
    UILabel * _textLabel;
    UIStackView * _titleSpinnerStackView;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UIStackView *mainStackView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UIStackView *titleSpinnerStackView;

+ (id)watchedKeyPaths;

- (void).cxx_destruct;
- (void)_watchLabelsForContentAndResizeIfNecessary;
- (id)activityIndicatorView;
- (void)dealloc;
- (id)detailTextLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activityIndicatorStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)mainStackView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)textLabel;
- (id)titleSpinnerStackView;

@end
