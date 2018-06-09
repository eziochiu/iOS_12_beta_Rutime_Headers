/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardMenuView : UIView <UIDimmingViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIKeyboardLayoutStar * _layout;
    UIKBTree * _referenceKey;
    bool  _usesDarkTheme;
    bool  _usesStraightLeftEdge;
    UIKBKeyView * m_backgroundKeyView;
    UIDimmingView * m_dimmingView;
    unsigned long long  m_firstVisibleRow;
    UIView * m_inputView;
    long long  m_mode;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_point;
    double  m_pointerOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_referenceLocation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_referenceRect;
    int  m_scrollDirection;
    double  m_scrollStartTime;
    NSTimer * m_scrollTimer;
    bool  m_scrollable;
    bool  m_scrolling;
    UIInputSwitcherSelectionExtraView * m_selExtraView;
    UIInputSwitcherShadowView * m_shadowView;
    bool  m_shouldFade;
    UISelectionFeedbackGenerator * m_slideBehavior;
    bool  m_startAutoscroll;
    UIInputSwitcherTableView * m_table;
    double  m_timeDismissed;
    unsigned long long  m_visibleRows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIKeyboardLayoutStar *layout;
@property (nonatomic) long long mode;
@property (nonatomic) UIKBTree *referenceKey;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDarkTheme;
@property (nonatomic) bool usesStraightLeftEdge;
@property (readonly) bool usesTable;

- (void).cxx_destruct;
- (void)_delayedFade;
- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (bool)centerPopUpOverKey;
- (void)clear;
- (id)containerView;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)endScrolling:(id)arg1;
- (void)fade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)fadeWithDelay:(double)arg1;
- (void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2;
- (id)font;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (void)hide;
- (void)highlightRow:(unsigned long long)arg1;
- (id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputView;
- (void)insertSelExtraView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveBounds;
- (bool)isVisible;
- (id)layout;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)maskForShadowViewBlurredBackground;
- (double)minYOfLastTableCellForSelectionExtraView;
- (long long)mode;
- (unsigned long long)numberOfItems;
- (void)performShowAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popupRect;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)referenceKey;
- (void)removeFromSuperview;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(bool)arg2;
- (void)setKeyboardDimmed:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)setReferenceKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (void)setUsesStraightLeftEdge:(bool)arg1;
- (void)setupBackgroundKeyViewWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupShadowViewWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (bool)shouldShow;
- (bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (void)show;
- (void)showAsHUD;
- (void)showAsHUDFromLocation:(struct CGPoint { double x1; double x2; })arg1 withInputView:(id)arg2 touchBegan:(double)arg3;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)stopAnyAutoscrolling;
- (id)subtitleFont;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (id)table;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)usesDarkTheme;
- (bool)usesDimmingView;
- (bool)usesShadowView;
- (bool)usesStraightLeftEdge;
- (bool)usesTable;
- (void)willFade;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)willShow;

@end
