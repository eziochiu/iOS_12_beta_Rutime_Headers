/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView> {
    double  _backButtonMaximumWidth;
    <_UINavigationBarTitleViewDataSource> * _dataSource;
    double  _height;
    NSLayoutConstraint * _heightConstraint;
    bool  _hideBackButton;
    bool  _hideLeadingBarButtons;
    bool  _hideStandardTitle;
    bool  _hideTrailingBarButtons;
    UINavigationItem * _navigationItem;
    _UINavigationBarTitleViewOverlayRects * _overlayRects;
    long long  _titleLocation;
    bool  _underlayBarContent;
}

@property (nonatomic, readonly) bool _hideNavigationBarBackButton;
@property (nonatomic, readonly) bool _hideNavigationBarLeadingBarButtons;
@property (nonatomic, readonly) bool _hideNavigationBarStandardTitle;
@property (nonatomic, readonly) bool _hideNavigationBarTrailingBarButtons;
@property (nonatomic, readonly) double _navigationBarBackButtonMaximumWidth;
@property (nonatomic, readonly) double _navigationBarContentHeight;
@property (nonatomic, readonly) long long _preferredAlignment;
@property (nonatomic, readonly) bool _underlayNavigationBarContent;
@property (nonatomic) double backButtonMaximumWidth;
@property (nonatomic, readonly, copy) NSArray *contentOverlayRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic) bool hideBackButton;
@property (nonatomic) bool hideLeadingBarButtons;
@property (nonatomic) bool hideStandardTitle;
@property (nonatomic) bool hideTrailingBarButtons;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long titleLocation;
@property (nonatomic) bool underlayBarContent;

- (void).cxx_destruct;
- (void)_contentDidChange;
- (bool)_hideNavigationBarBackButton;
- (bool)_hideNavigationBarLeadingBarButtons;
- (bool)_hideNavigationBarStandardTitle;
- (bool)_hideNavigationBarTrailingBarButtons;
- (double)_navigationBarBackButtonMaximumWidth;
- (double)_navigationBarContentHeight;
- (void)_performTransition:(long long)arg1 willBeDisplayed:(bool)arg2;
- (long long)_preferredAlignment;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
- (void)_transitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)_transitionWillBegin:(long long)arg1 willBeDisplayed:(bool)arg2;
- (bool)_underlayNavigationBarContent;
- (bool)_wantsTwoPartTransition;
- (double)backButtonMaximumWidth;
- (void)contentDidChange;
- (id)contentOverlayRects;
- (double)height;
- (bool)hideBackButton;
- (bool)hideLeadingBarButtons;
- (bool)hideStandardTitle;
- (bool)hideTrailingBarButtons;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)navigationItem;
- (void)performTransition:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)preferredContentSizeDidChange;
- (long long)preferredContentSizeForSize:(long long)arg1;
- (void)setBackButtonMaximumWidth:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setHideBackButton:(bool)arg1;
- (void)setHideLeadingBarButtons:(bool)arg1;
- (void)setHideStandardTitle:(bool)arg1;
- (void)setHideTrailingBarButtons:(bool)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setUnderlayBarContent:(bool)arg1;
- (long long)titleLocation;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(bool)arg2;
- (bool)underlayBarContent;

@end
