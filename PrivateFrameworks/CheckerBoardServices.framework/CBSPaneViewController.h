/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
 */

@interface CBSPaneViewController : CBSTableViewController {
    UIButton * _primaryButton;
    UIButton * _secondaryButton;
}

@property (nonatomic, retain) UIButton *primaryButton;
@property (nonatomic, retain) UIButton *secondaryButton;

- (void).cxx_destruct;
- (void)_setupPrimaryButton;
- (void)_setupSecondaryButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)primaryButton;
- (void)primaryButtonTapped:(id)arg1;
- (id)primaryButtonText;
- (id)secondaryButton;
- (void)secondaryButtonTapped:(id)arg1;
- (id)secondaryButtonText;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
