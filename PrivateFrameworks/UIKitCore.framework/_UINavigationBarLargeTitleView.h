/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarLargeTitleView : UIView <_UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant> {
    NSString * __effectiveTitle;
    UIView * _accessoryView;
    unsigned long long  _accessoryViewHorizontalAlignment;
    bool  _alignAccessoryViewToTitleBaseline;
    NSArray * _alternateTitles;
    UIFontMetrics * _fontMetrics;
    _UINavigationBarLargeTitleViewLayout * _layout;
    _UINavigationControllerRefreshControlHost * _refreshControlHost;
    bool  _supportsTwoLines;
    NSString * _title;
    NSDictionary * _titleAttributes;
    NSArray * _titleCandidates;
    long long  _titleType;
    _UINavigationBarTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic) bool alignAccessoryViewToTitleBaseline;
@property (nonatomic, retain) NSArray *alternateTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFontMetrics *fontMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic) double restingHeightOfRefreshControl;
@property (nonatomic, readonly) double restingHeightOfTitleView;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsTwoLines;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *titleAttributes;
@property (nonatomic) long long titleType;

- (void).cxx_destruct;
- (id)_effectiveTitle;
- (id)_layoutForMeasurement;
- (id)_newLayout;
- (id)_newTitleLabel;
- (void)_setupTitle;
- (id)_titleForCurrentWidth;
- (void)_updateContentAndInvalidate:(bool)arg1;
- (void)_updateFontMetrics;
- (id)accessibilityTitleView;
- (id)accessoryView;
- (unsigned long long)accessoryViewHorizontalAlignment;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(bool)arg2;
- (bool)alignAccessoryViewToTitleBaseline;
- (id)alternateTitles;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (id)fontMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (id)refreshControlHost;
- (double)restingHeightOfRefreshControl;
- (double)restingHeightOfTitleView;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1;
- (void)setAlignAccessoryViewToTitleBaseline:(bool)arg1;
- (void)setAlternateTitles:(id)arg1;
- (void)setRefreshControlHost:(id)arg1;
- (void)setRestingHeightOfRefreshControl:(double)arg1;
- (void)setSupportsTwoLines:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributes:(id)arg1;
- (void)setTitleType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 titleType:(long long)arg2;
- (bool)supportsTwoLines;
- (id)title;
- (id)titleAttributes;
- (long long)titleType;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;

@end
