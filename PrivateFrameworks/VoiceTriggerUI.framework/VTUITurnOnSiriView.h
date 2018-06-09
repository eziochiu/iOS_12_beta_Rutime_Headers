/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUITurnOnSiriView : UIView <UITextViewDelegate> {
    UIButton * _continueButton;
    NSArray * _continueButtons;
    UITextView * _footerTextView;
    NSMutableArray * _horizontalPaddingConstraints;
    NSLayoutConstraint * _imageSpacingConstraint;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSLayoutConstraint * _imageViewHeightCapConstraint;
    NSLayoutConstraint * _imageViewHeightMinimumConstraint;
    UILabel * _instructionLabel;
    UIButton * _laterButton;
    UIView * _scrollContainerView;
    UIScrollView * _scrollView;
    NSArray * _siriLanguages;
    <VTUITurnOnSiriViewDelegate> * _stateViewDelegate;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIButton *continueButton;
@property (nonatomic, readonly) NSArray *continueButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *laterButton;
@property (nonatomic) <VTUITurnOnSiriViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setImage:(id)arg1;
- (void)_setupContent;
- (void)_setupImage;
- (void)_setupUI;
- (id)continueButton;
- (id)continueButtons;
- (void)fadeInSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageSelectionOfContinueButton:(id)arg1;
- (id)laterButton;
- (void)layoutSubviews;
- (void)prepareForLastTimeShown;
- (void)setStateViewDelegate:(id)arg1;
- (id)stateViewDelegate;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
