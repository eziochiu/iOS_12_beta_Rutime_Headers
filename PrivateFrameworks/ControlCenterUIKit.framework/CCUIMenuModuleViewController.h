/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController, UIGestureRecognizerDelegate> {
    CCUIContentModuleContext * _contentModuleContext;
    UIScrollView * _contentScrollView;
    UIView * _contentView;
    UIView * _darkeningBackgroundView;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    CCUIMenuModuleItemView * _footerButtonView;
    UIView * _footerSeparatorView;
    UIView * _headerSeparatorView;
    bool  _ignoreMenuItemAtTouchLocationAfterExpanded;
    CCUIMenuModuleItemView * _menuItemToIgnore;
    UIStackView * _menuItemsContainer;
    NSMutableArray * _menuItemsViews;
    MTMaterialView * _platterMaterialView;
    UILongPressGestureRecognizer * _pressGestureRecognizer;
    bool  _shouldProvideOwnPlatter;
    UILabel * _titleLabel;
    bool  _useTallLayout;
}

@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic) bool shouldProvideOwnPlatter;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useTallLayout;

- (void).cxx_destruct;
- (double)_contentScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_contentSizeCategoryDidChange;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_contentTransformForScale:(double)arg1;
- (double)_desiredExpandedHeight;
- (void)_fadeViewsForExpandedState:(bool)arg1;
- (double)_footerHeight;
- (void)_handleActionTapped:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_layoutFooterButtonForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutFooterSeparatorForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutGlyphViewForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutHeaderSeparatorForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutMenuItemsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutTitleLabelForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutViewSubviews;
- (double)_maximumHeight;
- (id)_menuItemAtGestureTouchLocation:(id)arg1;
- (double)_menuItemsHeightForWidth:(double)arg1;
- (double)_separatorHeight;
- (void)_setupContentViewBounds;
- (void)_setupMenuItems;
- (void)_setupTitleLabel;
- (bool)_shouldShowFooterButton;
- (bool)_shouldShowFooterChin;
- (bool)_shouldShowFooterSeparator;
- (id)_titleFont;
- (bool)_toggleSelectionForMenuItem:(id)arg1;
- (void)_updateScrollViewContentSize;
- (unsigned long long)actionsCount;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(id /* block */)arg3;
- (void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(id /* block */)arg4;
- (id)contentModuleContext;
- (void)contentModuleWillTransitionToExpandedContentMode:(bool)arg1;
- (id)contentView;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)headerHeight;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentHeightWithWidth:(double)arg1;
- (double)preferredExpandedContentWidth;
- (void)removeAllActions;
- (void)removeFooterButton;
- (void)setContentModuleContext:(id)arg1;
- (void)setFooterButtonTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)setShouldProvideOwnPlatter:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseTallLayout:(bool)arg1;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldProvideOwnPlatter;
- (bool)useTallLayout;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
