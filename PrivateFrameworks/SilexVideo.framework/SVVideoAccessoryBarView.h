/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarView : UIVisualEffectView {
    SVVideoAccessoryBarDisplayModeTransition * _activeDisplayModeTransition;
    SVVideoAccessoryBarItemTransition * _activeLeadingItemTransition;
    SVVideoAccessoryBarItemTransition * _activeTrailingItemTransition;
    <SVVideoAccessoryBarSizing> * _barSizer;
    <SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding> * _displayModeTransitionCoordinatorProvider;
    SVVideoAccessoryBarDisplayState * _displayState;
    <SVAccessoryItem> * _expandedItem;
    <SVVideoAccessoryItemSizing> * _itemSizer;
    UIView * _leadingContainerView;
    <SVAccessoryItem> * _leadingItem;
    SVVideoAccessoryBarDisplayModeTransition * _pendingDisplayModeTransition;
    SVVideoAccessoryBarItemTransition * _pendingLeadingItemTransition;
    SVVideoAccessoryBarItemTransition * _pendingTrailingItemTransition;
    UIView * _trailingContainerView;
    <SVAccessoryItem> * _trailingItem;
}

@property (nonatomic, retain) SVVideoAccessoryBarDisplayModeTransition *activeDisplayModeTransition;
@property (nonatomic, retain) SVVideoAccessoryBarItemTransition *activeLeadingItemTransition;
@property (nonatomic, retain) SVVideoAccessoryBarItemTransition *activeTrailingItemTransition;
@property (nonatomic, readonly) <SVVideoAccessoryBarSizing> *barSizer;
@property (nonatomic, readonly) <SVAccessoryItem> *currentItem;
@property (nonatomic, readonly) <SVVideoAccessoryItemDisplayModeTransitionCoordinatorProviding> *displayModeTransitionCoordinatorProvider;
@property (nonatomic, retain) SVVideoAccessoryBarDisplayState *displayState;
@property (nonatomic, retain) <SVAccessoryItem> *expandedItem;
@property (nonatomic, readonly) <SVVideoAccessoryItemSizing> *itemSizer;
@property (nonatomic, readonly) UIView *leadingContainerView;
@property (nonatomic, retain) <SVAccessoryItem> *leadingItem;
@property (nonatomic, retain) SVVideoAccessoryBarDisplayModeTransition *pendingDisplayModeTransition;
@property (nonatomic, retain) SVVideoAccessoryBarItemTransition *pendingLeadingItemTransition;
@property (nonatomic, retain) SVVideoAccessoryBarItemTransition *pendingTrailingItemTransition;
@property (nonatomic, readonly) UIView *trailingContainerView;
@property (nonatomic, retain) <SVAccessoryItem> *trailingItem;

- (void).cxx_destruct;
- (id)activeDisplayModeTransition;
- (id)activeLeadingItemTransition;
- (id)activeTrailingItemTransition;
- (id)barSizer;
- (id)currentItem;
- (id)displayModeTransitionCoordinatorProvider;
- (id)displayState;
- (void)expandItem:(id)arg1 animated:(bool)arg2;
- (id)expandedItem;
- (id)initWithBarSizer:(id)arg1 itemSizer:(id)arg2 displayModeTransitionCoordinatorProvider:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)itemSizer;
- (void)layoutSubviews;
- (id)leadingContainerView;
- (id)leadingItem;
- (id)pendingDisplayModeTransition;
- (id)pendingLeadingItemTransition;
- (id)pendingTrailingItemTransition;
- (void)performPendingTransitions;
- (void)schedulePerformPendingTransitions;
- (void)setAccessoryItem:(id)arg1 withCoordinator:(id)arg2;
- (void)setActiveDisplayModeTransition:(id)arg1;
- (void)setActiveLeadingItemTransition:(id)arg1;
- (void)setActiveTrailingItemTransition:(id)arg1;
- (void)setDisplayState:(id)arg1;
- (void)setExpandedItem:(id)arg1;
- (void)setLeadingItem:(id)arg1;
- (void)setLeadingItem:(id)arg1 withCoordinator:(id)arg2;
- (void)setPendingDisplayModeTransition:(id)arg1;
- (void)setPendingLeadingItemTransition:(id)arg1;
- (void)setPendingTrailingItemTransition:(id)arg1;
- (void)setTrailingItem:(id)arg1;
- (void)setTrailingItem:(id)arg1 withCoordinator:(id)arg2;
- (id)trailingContainerView;
- (id)trailingItem;
- (void)transitionLeadingItemToDisplayMode:(unsigned long long)arg1 trailingItemToDisplayMode:(unsigned long long)arg2 animated:(bool)arg3 synchronized:(bool)arg4;

@end
