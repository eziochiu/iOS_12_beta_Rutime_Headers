/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView {
    NSString * _currentActiveBundleIdentifier;
    NSArray * _currentBundleIdentifiers;
    UILabel * _inCallDurationLabel;
    NSLayoutConstraint * _inCallLabelSpacingConstraint;
    UIStatusBarCarPlayDockAppItemButton * _itemOneButton;
    NSLayoutConstraint * _itemOneTopConstraint;
    UIStatusBarCarPlayDockAppItemButton * _itemThreeButton;
    UIStatusBarCarPlayDockAppItemButton * _itemTwoButton;
    UIView * _preferredItemViewToFocus;
    bool  _showingCallTimer;
}

@property (nonatomic, copy) NSString *currentActiveBundleIdentifier;
@property (nonatomic, copy) NSArray *currentBundleIdentifiers;
@property (nonatomic, retain) UILabel *inCallDurationLabel;
@property (nonatomic, retain) NSLayoutConstraint *inCallLabelSpacingConstraint;
@property (nonatomic, retain) UIStatusBarCarPlayDockAppItemButton *itemOneButton;
@property (nonatomic, retain) NSLayoutConstraint *itemOneTopConstraint;
@property (nonatomic, retain) UIStatusBarCarPlayDockAppItemButton *itemThreeButton;
@property (nonatomic, retain) UIStatusBarCarPlayDockAppItemButton *itemTwoButton;
@property (nonatomic) UIView *preferredItemViewToFocus;
@property (getter=isShowingCallTimer, nonatomic) bool showingCallTimer;

- (void).cxx_destruct;
- (double)_neededSizeWithCallTimer;
- (double)_neededSizeWithoutCallTimer;
- (unsigned long long)_numberOfEnabledItems;
- (id)_toItemViewForBundleIdentifier:(id)arg1;
- (void)_updateInCallDurationIfNecessary:(id)arg1;
- (bool)allowsUserInteraction;
- (bool)animatesDataChange;
- (id)currentActiveBundleIdentifier;
- (id)currentBundleIdentifiers;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)inCallDurationLabel;
- (id)inCallLabelSpacingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingCallTimer;
- (id)itemOneButton;
- (id)itemOneTopConstraint;
- (id)itemThreeButton;
- (id)itemTwoButton;
- (void)layoutSubviews;
- (double)neededSizeForImageSet:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredItemViewToFocus;
- (void)setCurrentActiveBundleIdentifier:(id)arg1;
- (void)setCurrentBundleIdentifiers:(id)arg1;
- (void)setInCallDurationLabel:(id)arg1;
- (void)setInCallLabelSpacingConstraint:(id)arg1;
- (void)setItemOneButton:(id)arg1;
- (void)setItemOneTopConstraint:(id)arg1;
- (void)setItemThreeButton:(id)arg1;
- (void)setItemTwoButton:(id)arg1;
- (void)setPreferredItemViewToFocus:(id)arg1;
- (void)setShowingCallTimer:(bool)arg1;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)updateForNewStyle:(id)arg1;

@end
