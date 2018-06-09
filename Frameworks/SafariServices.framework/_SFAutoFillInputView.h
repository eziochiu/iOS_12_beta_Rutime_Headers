/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillInputView : UIInputView {
    <_SFAutoFillInputViewDelegate> * _delegate;
    NSMutableArray * _dynamicConstraints;
    UILabel * _explanationLabel;
    UILayoutGuide * _explanationLabelBottomMarginLayoutGuide;
    UILayoutGuide * _explanationLabelTopMarginLayoutGuide;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    UIButton * _keyboardButton;
    _SFAutoFillQuickTypeBarView * _quickTypeBarView;
    UIKBScreenTraits * _screenTraits;
}

@property (nonatomic) <_SFAutoFillInputViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_createQuickTypeBarViewIfNecessaryWithSuggestion:(id)arg1;
- (void)_fillCredential:(id)arg1;
- (id)_screenTraits;
- (void)_showMorePasswords:(id)arg1;
- (void)_showStandardKeyboard:(id)arg1;
- (bool)_showsOwnQuickTypeBar;
- (id)delegate;
- (id)initWithHostString:(id)arg1 suggestion:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
