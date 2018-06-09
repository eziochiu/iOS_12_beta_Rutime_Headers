/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRefreshControl : UIControl {
    double  _additionalTopInset;
    bool  _adjustingInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _appliedInsets;
    _UIRefreshControlContentView * _contentView;
    <_UIRefreshControlHosting> * _host;
    bool  _insetsApplied;
    double  _refreshControlHeight;
    long long  _refreshControlState;
    double  _snappingHeight;
    long long  _style;
    double  _visibleHeight;
}

@property (nonatomic, readonly) bool _areInsetsBeingApplied;
@property (getter=_host, setter=_setHost:, nonatomic) <_UIRefreshControlHosting> *_host;
@property (nonatomic, readonly) bool _hostAdjustsContentOffset;
@property (nonatomic, readonly) double _refreshControlHeight;
@property (nonatomic, readonly) double _snappingHeight;
@property (nonatomic, readonly) double _visibleHeight;
@property (getter=_appliedInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } appliedInsets;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) long long refreshControlState;
@property (getter=isRefreshing, nonatomic, readonly) bool refreshing;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) UIColor *tintColor;

+ (Class)_contentViewClassForStyle:(long long)arg1;
+ (id)_defaultColor;

- (void).cxx_destruct;
- (void)_addInsetHeight:(double)arg1;
- (void)_addInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_appliedInsets;
- (bool)_areInsetsBeingApplied;
- (id)_attributedTitle;
- (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_contentView;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_didScroll;
- (void)_endRefreshingAnimated:(bool)arg1;
- (id)_host;
- (bool)_hostAdjustsContentOffset;
- (double)_impactIntensityForVelocity:(double)arg1;
- (bool)_isApplyingInsets;
- (struct CGPoint { double x1; double x2; })_originForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (long long)_recomputeNewState;
- (double)_refreshControlHeight;
- (void)_removeInsetHeight:(double)arg1;
- (void)_removeInsets;
- (void)_resizeToFitContents;
- (id)_scrollView;
- (double)_scrollViewHeight;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setHost:(id)arg1;
- (void)_setRefreshControlState:(long long)arg1 notify:(bool)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setVisibleHeight:(double)arg1;
- (double)_snappingHeight;
- (double)_stiffnessForVelocity:(double)arg1;
- (id)_tintColor;
- (void)_update;
- (void)_updateConcealingMask;
- (void)_updateHiddenStateIfNeeded;
- (void)_updateSnappingHeight;
- (double)_visibleHeight;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x1; double x2; })arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
- (id)attributedTitle;
- (void)beginRefreshing;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (void)endRefreshing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isRefreshing;
- (long long)refreshControlState;
- (double)revealedFraction;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRefreshControlState:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (long long)style;
- (id)tintColor;

@end
