/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcher : NSObject {
    bool  _isGlobeKeyDown;
    NSString * _loadedIdentifier;
    NSString * _newMode;
    UIDelayedAction * m_hideSwitcherDelay;
    UIDelayedAction * m_keyHoldDelay;
    double  m_lastGlobeKeyUpTime;
    UIDelayedAction * m_showSwitcherDelay;
    int  m_state;
    UIInputSwitcherView * m_switcherView;
}

@property (nonatomic) bool isGlobeKeyDown;
@property (nonatomic, copy) NSString *loadedIdentifier;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)_showSwitcherViewAsHUD;
- (void)cancelShowSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearKeyHoldTimer;
- (void)clearShowSwitcherTimer;
- (void)dealloc;
- (bool)handleModifiersChangedEvent:(id)arg1;
- (void)handleRotate:(id)arg1;
- (bool)handleSwitchCommand:(bool)arg1;
- (bool)handleSwitchCommand:(bool)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;
- (bool)handleSwitchingKeyEvent:(id)arg1;
- (void)hideSwitcher;
- (id)init;
- (id)inputModeIdentifierWithNextFlag:(bool)arg1;
- (bool)isGlobeKeyDown;
- (bool)isVisible;
- (bool)isVisibleOrHiding;
- (id)loadedIdentifier;
- (void)setIsGlobeKeyDown:(bool)arg1;
- (void)setLoadedIdentifier:(id)arg1;
- (void)showSwitcherShouldAutoHide:(bool)arg1;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherWithoutAutoHide;
- (bool)switchMode:(id)arg1 withHUD:(bool)arg2 withDelay:(bool)arg3;
- (void)touchHideSwitcherTimer;
- (void)touchKeyHoldTimer;
- (void)touchShowSwitcherTimer;
- (void)updateHardwareLayout;

@end
