/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUReportConcernViewController : SUTableViewController {
    bool  _animatingKeyboard;
    unsigned long long  _itemIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _originalTableInsets;
}

@property (nonatomic, readonly) unsigned long long itemIdentifier;

- (void)_cancel:(id)arg1;
- (void)_fetchConcerns;
- (void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_submit:(id)arg1;
- (bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifier;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)loadView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
