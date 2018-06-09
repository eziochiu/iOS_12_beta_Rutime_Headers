/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherView : UIKeyboardMenuView {
    bool  _fileReportFromSwitcher;
    bool  _messagesWriteboardFromSwitcher;
    bool  _showsSwitches;
    UIInputSwitcherGestureState * m_gestureState;
    NSMutableArray * m_inputModes;
    NSArray * m_inputSwitcherItems;
    bool  m_isForDictation;
}

@property (nonatomic) bool fileReportFromSwitcher;
@property (nonatomic, readonly) NSArray *inputModes;
@property (nonatomic) bool messagesWriteboardFromSwitcher;
@property (nonatomic) bool showsSwitches;

+ (id)activeInstance;
+ (id)sharedInstance;

- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;
- (bool)_isHandBiasSwitchVisible;
- (id)_itemWithIdentifier:(id)arg1;
- (void)_reloadInputSwitcherItems;
- (void)_segmentControlValueDidChange:(id)arg1;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 isForDictation:(bool)arg4 tapAction:(id /* block */)arg5;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)defaultInputMode;
- (unsigned long long)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)fadeWithDelay:(double)arg1;
- (bool)fileReportFromSwitcher;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputModes;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (bool)messagesWriteboardFromSwitcher;
- (id)nextInputMode;
- (unsigned long long)numberOfItems;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)previousInputMode;
- (void)reloadInputModes;
- (void)selectInputMode:(id)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)setFileReportFromSwitcher:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setMessagesWriteboardFromSwitcher:(bool)arg1;
- (void)setShowsSwitches:(bool)arg1;
- (bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (bool)shouldShow;
- (bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (bool)showsSwitches;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (void)switchAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willFade;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)willShow;

@end
