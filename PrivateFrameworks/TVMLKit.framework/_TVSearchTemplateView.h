/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchTemplateView : UIView {
    bool  _bannerHidden;
    UIView * _bannerView;
    UIImageView * _bgImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionMargin;
    UICollectionView * _collectionView;
    <_TVSearchTemplateViewDelegate> * _delegate;
    struct { 
        unsigned int hasWillAddKeyboard : 1; 
        unsigned int hasDidAddKeyboard : 1; 
        unsigned int hasWillRemoveKeyboard : 1; 
        unsigned int hasDidRemoveKeyboard : 1; 
        unsigned int hasDidOffsetOrigin : 1; 
    }  _delegateFlags;
    UIView * _fieldAndKeyboardContainer;
    bool  _focusHidden;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _inset;
    bool  _isTouchEnabled;
    UIView * _keyboard;
    NSArray * _keyboardConstraints;
    UIFocusGuide * _keyboardProxy;
    NSArray * _keyboardProxyConstraints;
    int  _keyboardState;
    UITapGestureRecognizer * _menuRecognizer;
    bool  _partialViewEnabled;
    <UIFocusEnvironment> * _preferredFocusEnvironment;
    UISearchBar * _searchBar;
    _TVSearchBarWrapper * _searchBarWrapper;
    bool  _spinning;
    int  _targetKeyboardState;
}

@property (nonatomic, retain) UIView *bannerView;
@property (nonatomic, readonly) UIImageView *bgImageView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionMargin;
@property (nonatomic, readonly, retain) UICollectionView *collectionView;
@property (nonatomic) <_TVSearchTemplateViewDelegate> *delegate;
@property (getter=isFocusHidden, nonatomic) bool focusHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } inset;
@property (nonatomic, readonly) bool isTouchEnabled;
@property (getter=isPartialViewEnabled, nonatomic) bool partialViewEnabled;
@property (getter=isSpinning, nonatomic) bool spinning;

- (void).cxx_destruct;
- (void)_addKeyboard;
- (void)_adjustKeyboardContainerPositionForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)_bannerMarginBottom;
- (void)_handleMenuAction:(id)arg1;
- (bool)_isSearchFieldVisible;
- (void)_pushKeyboardTowardsStableState:(unsigned long long)arg1;
- (void)_transitionKeyboardInAnimated:(bool)arg1;
- (void)_transitionKeyboardOut;
- (void)adjustScrollForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)bannerView;
- (id)bgImageView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionMargin;
- (id)collectionView;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCollectionView:(id)arg1 searchBar:(id)arg2 keyboard:(id)arg3 touchEnabled:(bool)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inset;
- (bool)isFocusHidden;
- (bool)isPartialViewEnabled;
- (bool)isSpinning;
- (bool)isTouchEnabled;
- (void)layoutSubviews;
- (void)offsetBannerToHide:(bool)arg1;
- (id)preferredFocusEnvironments;
- (void)safeAreaInsetsDidChange;
- (void)setBannerView:(id)arg1;
- (void)setCollectionMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusHidden:(bool)arg1;
- (void)setInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPartialViewEnabled:(bool)arg1;
- (void)setSpinning:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)stopEditing;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end
