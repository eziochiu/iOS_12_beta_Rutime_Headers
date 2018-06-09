/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardViewController : SearchUITableViewController {
    SFCard * _card;
    unsigned long long  _level;
    UILabel * _loadingLabel;
    UIActivityIndicatorView * _loadingSpinner;
    UIView * _loadingView;
}

@property (retain) SFCard *card;
@property unsigned long long level;
@property (retain) UILabel *loadingLabel;
@property (retain) UIActivityIndicatorView *loadingSpinner;
@property (retain) UIView *loadingView;

- (void).cxx_destruct;
- (id)card;
- (void)cardViewDidAppear;
- (void)displayLoadingView;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (unsigned long long)level;
- (id)loadingLabel;
- (id)loadingSpinner;
- (id)loadingView;
- (double)offScreenContentScrollDistance;
- (void)setCard:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLoadingSpinner:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)testingTableViewController;
- (void)updateWithCardSections:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end