/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView * _actionableHeaderView;
    NSString * _backdropGroupName;
    UIColor * _backgroundColorForNonFloatingState;
    <MusicLibraryBrowseSectionHeaderViewDelegate> * _delegate;
    _UIBackdropView * _floatingBackdropView;
    long long  _hairlineStyleForNonFloatingState;
    UIView * _hairlineView;
    UIColor * _headerTextColorForNonFloatingState;
    bool  _shouldSkipLayout;
    double  _topContentInset;
}

@property (getter=isActionable, nonatomic) bool actionable;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIColor *backgroundColorForNonFloatingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long hairlineStyleForNonFloatingState;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) UIColor *headerTextColorForNonFloatingState;
@property (readonly) Class superclass;
@property (nonatomic) double topContentInset;

+ (struct { double x1; double x2; long long x3; long long x4; })_actionableHeaderMetricsForDisplayScale:(double)arg1;
+ (double)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)backdropGroupName;
- (id)backgroundColorForNonFloatingState;
- (id)delegate;
- (long long)hairlineStyleForNonFloatingState;
- (id)headerText;
- (id)headerTextColorForNonFloatingState;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isActionable;
- (void)layoutBelowIfNeeded;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setActionable:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundColorForNonFloatingState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHairlineStyleForNonFloatingState:(long long)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setTopContentInset:(double)arg1;
- (double)topContentInset;
- (void)traitCollectionDidChange:(id)arg1;

@end
