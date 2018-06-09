/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarTransitionContext : NSObject {
    bool  _allowLargeTitles;
    _UIBarBackground * _backgroundView;
    bool  _beginWithLargeTitle;
    NSMutableSet * _clippingViews;
    _UINavigationBarContentView * _contentView;
    bool  _endWithLargeTitle;
    _UINavigationBarContentViewLayout * _fromContentLayout;
    _UINavigationBarLargeTitleViewLayout * _fromLargeTitleLayout;
    bool  _isRTL;
    int  _largeTitleTransitionType;
    _UINavigationBarLargeTitleView * _largeTitleView;
    UINavigationBar * _navigationBar;
    _UINavigationBarModernPromptView * _promptView;
    _UINavigationBarItemStack * _stack;
    _UINavigationBarContentViewLayout * _toContentLayout;
    _UINavigationBarLargeTitleViewLayout * _toLargeTitleLayout;
    bool  _twoPart;
}

@property (nonatomic) bool allowLargeTitles;
@property (nonatomic, retain) _UIBarBackground *backgroundView;
@property (nonatomic) bool beginWithLargeTitle;
@property (nonatomic, retain) _UINavigationBarContentView *contentView;
@property (nonatomic, readonly) double contentViewFittingHeight;
@property (nonatomic, readonly) double contentViewMaxY;
@property (nonatomic) bool endWithLargeTitle;
@property (nonatomic, retain) _UINavigationBarContentViewLayout *fromContentLayout;
@property (nonatomic, retain) _UINavigationBarLargeTitleViewLayout *fromLargeTitleLayout;
@property (nonatomic) bool isRTL;
@property (nonatomic, retain) _UINavigationBarLargeTitleView *largeTitleView;
@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic, retain) _UINavigationBarModernPromptView *promptView;
@property (nonatomic, retain) _UINavigationBarItemStack *stack;
@property (nonatomic, retain) _UINavigationBarContentViewLayout *toContentLayout;
@property (nonatomic, retain) _UINavigationBarLargeTitleViewLayout *toLargeTitleLayout;
@property (nonatomic, readonly) int transition;
@property (nonatomic) bool twoPart;
@property (nonatomic, readonly) UIView *viewFadingInFromCustomAlpha;
@property (nonatomic, readonly) UIView *viewUsingEaseInCurve;
@property (nonatomic, readonly) UIView *viewUsingEaseOutCurve;

+ (id)contextForTransition:(int)arg1;

- (void).cxx_destruct;
- (void)_addClippingView:(id)arg1;
- (void)_removeAllClippingViews;
- (bool)allowLargeTitles;
- (void)animate;
- (id)backgroundView;
- (bool)beginWithLargeTitle;
- (void)cancel;
- (void)complete;
- (id)contentView;
- (double)contentViewFittingHeight;
- (double)contentViewMaxY;
- (bool)endWithLargeTitle;
- (id)fromContentLayout;
- (id)fromLargeTitleLayout;
- (bool)isRTL;
- (id)largeTitleView;
- (id)navigationBar;
- (void)prepare;
- (id)promptView;
- (void)recordUpdates:(id /* block */)arg1;
- (void)setAllLargeTitleLayoutsVisible;
- (void)setAllowLargeTitles:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBeginWithLargeTitle:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setEndWithLargeTitle:(bool)arg1;
- (void)setFromContentLayout:(id)arg1;
- (void)setFromLargeTitleLayout:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setLargeTitleView:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPromptView:(id)arg1;
- (void)setStack:(id)arg1;
- (void)setToContentLayout:(id)arg1;
- (void)setToLargeTitleLayout:(id)arg1;
- (void)setTwoPart:(bool)arg1;
- (id)stack;
- (id)toContentLayout;
- (id)toLargeTitleLayout;
- (bool)twoPart;
- (id)viewFadingInFromCustomAlpha;
- (id)viewUsingEaseInCurve;
- (id)viewUsingEaseOutCurve;

@end
