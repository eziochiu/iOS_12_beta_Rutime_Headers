/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleStatusView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    NSArray * _constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIButton * _continueButton;
    NSLayoutConstraint * _continueButtonBottom;
    UILabel * _countLabel;
    UILabel * _descriptionLabel;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewY;
    UILabel * _titleLabel;
    unsigned long long  _viewState;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) NSLayoutConstraint *continueButtonBottom;
@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewY;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) unsigned long long viewState;

- (void).cxx_destruct;
- (void)_createViews;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (id)activityIndicator;
- (void)commonInit;
- (id)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)continueButton;
- (id)continueButtonBottom;
- (id)countLabel;
- (id)descriptionLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContinueButton:(id)arg1;
- (void)setContinueButtonBottom:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewY:(id)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (id)stackView;
- (id)stackViewY;
- (id)titleLabel;
- (void)updateConstraints;
- (unsigned long long)viewState;

@end
