/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportHistorySectionHeaderView : UICollectionReusableView {
    UIButton * _actionButton;
    bool  _actionButtonEnabled;
    NSString * _actionText;
    _UIBackdropView * _backdropView;
    NSString * _backdropViewGroupName;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <PUImportHistorySectionHeaderViewDelegate> * _delegate;
    struct { 
        unsigned int headerViewDidPressActionButton : 1; 
    }  _delegateFlags;
    bool  _inLayoutTransition;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    UITraitCollection * _selfSizingTraits;
    bool  _shouldBlurBackground;
    bool  _showsActionButton;
    UILabel * _spacerLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic) bool actionButtonEnabled;
@property (nonatomic, copy) NSString *actionText;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <PUImportHistorySectionHeaderViewDelegate> *delegate;
@property (nonatomic) bool inLayoutTransition;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) UITraitCollection *selfSizingTraits;
@property (nonatomic) bool shouldBlurBackground;
@property (nonatomic) bool showsActionButton;
@property (nonatomic, retain) UILabel *spacerLabel;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (bool)_disableRasterizeInAnimations;
- (void)_updateActionButtonEnabledAnimated:(bool)arg1;
- (void)_updateActionButtonText;
- (void)_updateActionButtonVisibility;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)_updateLabelFonts;
- (void)_updateLabelLineNumbers;
- (void)_updateSpacerLabelHiddenState;
- (void)_updateWithCurrentTraits;
- (id)actionButton;
- (bool)actionButtonEnabled;
- (id)actionText;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backdropView;
- (id)backdropViewGroupName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (double)heightForSizeClass:(long long)arg1 width:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)inLayoutTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutMode;
- (void)layoutSubviews;
- (id)primaryLabel;
- (id)primaryText;
- (id)secondaryLabel;
- (id)secondaryText;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (id)selfSizingTraits;
- (void)setActionButton:(id)arg1;
- (void)setActionButtonEnabled:(bool)arg1;
- (void)setActionButtonEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setActionText:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setInLayoutTransition:(bool)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelfSizingTraits:(id)arg1;
- (void)setShouldBlurBackground:(bool)arg1;
- (void)setShowsActionButton:(bool)arg1;
- (void)setSpacerLabel:(id)arg1;
- (bool)shouldBlurBackground;
- (bool)showsActionButton;
- (id)spacerLabel;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
