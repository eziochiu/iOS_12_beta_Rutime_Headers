/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIResultViewController : UIViewController <SearchUIKeyboardableTableViewScrollDelegate, SearchUITableViewTesting, UIGestureRecognizerDelegate> {
    <SearchUIResultViewDelegate> * _delegate;
    SearchUIReplicatorView * _replicatorView;
    SearchUIResultTableViewController * _resultTableViewController;
    bool  _shouldMonitorScrollingPastBottomOfContent;
    id /* block */  cellWillDisplayHandler;
    id /* block */  tableViewDidUpdateHandler;
    id /* block */  tableViewWillUpdateHandler;
}

@property (nonatomic, copy) id /* block */ cellWillDisplayHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIResultViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIReplicatorView *replicatorView;
@property (retain) SearchUIResultTableViewController *resultTableViewController;
@property (nonatomic, retain) SearchUISearchField *searchField;
@property (nonatomic) bool shouldHideResultsUnderKeyboard;
@property (nonatomic) bool shouldMonitorScrollingPastBottomOfContent;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewDidUpdateHandler;
@property (nonatomic, copy) id /* block */ tableViewWillUpdateHandler;

- (void).cxx_destruct;
- (id /* block */)cellWillDisplayHandler;
- (id)contentScrollView;
- (id)currentTableModel;
- (id)delegate;
- (void)didBeginScrolling;
- (void)didScrollPastBottomOfContent;
- (void)didTap;
- (double)distanceToTopOfAppIcons;
- (unsigned long long)edgesForExtendedLayout;
- (id)feedbackListener;
- (id)footerView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)performScrollTestWithCompletion:(id /* block */)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (id)replicatorView;
- (id)resultTableViewController;
- (id)searchField;
- (void)setCellWillDisplayHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setResultTableViewController:(id)arg1;
- (void)setSearchField:(id)arg1;
- (void)setShouldHideResultsUnderKeyboard:(bool)arg1;
- (void)setShouldMonitorScrollingPastBottomOfContent:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTableViewDidUpdateHandler:(id /* block */)arg1;
- (void)setTableViewWillUpdateHandler:(id /* block */)arg1;
- (bool)shouldHideResultsUnderKeyboard;
- (bool)shouldMonitorScrollingPastBottomOfContent;
- (bool)shouldUseInsetRoundedSections;
- (unsigned long long)style;
- (id /* block */)tableViewDidUpdateHandler;
- (id /* block */)tableViewWillUpdateHandler;
- (void)tapAtIndexPath:(id)arg1;
- (void)updateWithResultSections:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
