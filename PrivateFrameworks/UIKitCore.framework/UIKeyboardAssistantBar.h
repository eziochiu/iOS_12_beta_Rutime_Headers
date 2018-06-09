/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardAssistantBar : _UIGroupedBar {
    bool  _hideAssistantBar;
    bool  _shouldShow;
    UIKeyboardBIUImageGenerator * m_BIUImageGenerator;
    UITextInputAssistantItem * m_currentAssistantItem;
    UITextInputAssistantItem * m_defaultAssistantItem;
    UIBarButtonItem * m_dismissButton;
    UIBarButtonItemGroup * m_dismissGroup;
    bool  m_isLandscape;
    bool  m_lightKeyboard;
    bool  m_needsDismissButton;
    bool  m_needsUpdateBarOnMoveToWindow;
    UIBarButtonItemGroup * m_predictionGroup;
    NSLayoutConstraint * m_predictionWidthConstraint;
    UIKeyboardCandidatePocketShadow * m_rightBorder;
    bool  m_setShowsCandidateInline;
    bool  m_show;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_splitGap;
    bool  m_suppressAXSHairlineThickening;
    bool  m_useLargeButton;
    int  m_validateGuard;
    UIBarButtonItem * m_writeboardButton;
}

@property (nonatomic) bool hideAssistantBar;
@property (nonatomic) bool shouldShow;
@property (nonatomic) bool show;

+ (id)activeInstance;
+ (double)assistantBarHeight;
+ (id)sharedInstance;
+ (double)sideBarWidthForOrientation:(long long)arg1;

- (id)BIUGenerator;
- (SEL)action:(int)arg1;
- (double)assistantBarHeight;
- (double)assistantBarHeightForOrientation:(long long)arg1;
- (double)assistantBarWidth;
- (void)assistantBold;
- (void)assistantCopy;
- (void)assistantCut;
- (void)assistantDismiss;
- (void)assistantItalic;
- (void)assistantPaste;
- (void)assistantRedo;
- (void)assistantUnderline;
- (void)assistantUndo;
- (void)assistantWriteboard;
- (id)barButtonItem:(unsigned long long)arg1;
- (bool)canPerformAction:(int)arg1;
- (id)currentAssistantItem;
- (void)dealloc;
- (id)defaultAssistantItem;
- (id)deleteButtonItem;
- (double)deleteKeyWidth;
- (void)didMoveToWindow;
- (void)dimKeys:(id)arg1;
- (bool)disabledByPrediction;
- (bool)enableInputClicksWhenVisible;
- (bool)enabled;
- (void)executeAction:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })handwritingCandidateSelectionFrame;
- (bool)hasCustomButtons;
- (bool)hasItems;
- (bool)hideAssistantBar;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newAssistantItemWithDefaultItems;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHideAssistantBar:(bool)arg1;
- (void)setInputAssistantButtonItems;
- (void)setInputAssistantButtonItemsForResponder:(id)arg1;
- (void)setShouldShow:(bool)arg1;
- (void)setShow:(bool)arg1;
- (bool)shouldShow;
- (bool)show;
- (void)showKeyboard:(id)arg1;
- (bool)showSwitch;
- (double)sideBarWidthForOrientation:(long long)arg1;
- (bool)statisticForCalloutBarButtonSelection:(id)arg1;
- (void)statisticForShortcutBarHideWithSwitcher;
- (void)updateBar;
- (void)updateBar:(bool)arg1;
- (void)updateButtons;
- (void)updatePredictionViewForCustomButtons;

@end
