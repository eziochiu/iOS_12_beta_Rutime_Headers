/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustSummaryController : UITableViewController {
    <CertInfoTrustSummaryControllerDelegate> * _delegate;
    <CertInfoTrustDescription> * _description;
    UITableViewCell * _descriptionCell;
    UIBarButtonItem * _doneButton;
    UITableViewCell * _headerCell;
    unsigned int  _showsDoneButton;
}

@property (nonatomic) <CertInfoTrustSummaryControllerDelegate> *delegate;
@property (nonatomic) bool showsDoneButton;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (id)_descriptionCell;
- (void)_doneButtonPressed:(id)arg1;
- (id)_headerCell;
- (id)delegate;
- (id)initWithTrustDescription:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 destructive:(bool)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showsDoneButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
