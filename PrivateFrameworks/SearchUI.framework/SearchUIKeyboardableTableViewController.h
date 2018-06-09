/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIKeyboardableTableViewController : UITableViewController <UIGestureRecognizerDelegate> {
    double  _keyboardHeight;
    <SearchUIKeyboardableTableViewScrollDelegate> * _scrollDelegate;
    bool  _shouldHideTableCellsUnderKeyboard;
    UIControl<UITextInput> * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double keyboardHeight;
@property <SearchUIKeyboardableTableViewScrollDelegate> *scrollDelegate;
@property (nonatomic) bool shouldHideTableCellsUnderKeyboard;
@property (readonly) Class superclass;
@property UIControl<UITextInput> *textField;

- (void).cxx_destruct;
- (void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canHighlightRowAtIndexPath:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)deletePressed;
- (void)downArrowPressed:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goBack;
- (void)hideCellsBelowKeyboardIfNecessary;
- (void)highlightRowAtIndexPath:(id)arg1 upward:(bool)arg2;
- (id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(bool)arg2;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (id)init;
- (bool)isLeftToRightOrientation;
- (bool)isOnCard;
- (void)keyboardFrameChanged:(id)arg1;
- (double)keyboardHeight;
- (void)leftArrowPressed;
- (void)moveCursorToBeginning;
- (void)moveCursorToEnd;
- (void)moveCursorToPosition:(id)arg1;
- (void)returnPressed;
- (void)rightArrowPressed;
- (id)scrollDelegate;
- (void)scrollIndexPathToVisible:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)selectHighlightedRow;
- (void)setKeyboardHeight:(double)arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setShouldHideTableCellsUnderKeyboard:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTextField:(id)arg1;
- (bool)shouldHideTableCellsUnderKeyboard;
- (void)showKeyboard;
- (id)textField;
- (void)upArrowPressed:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
