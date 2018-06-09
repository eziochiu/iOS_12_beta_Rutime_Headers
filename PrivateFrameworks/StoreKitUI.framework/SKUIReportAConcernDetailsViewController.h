/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernDetailsViewController : UIViewController <UITableViewDelegate> {
    id /* block */  _completion;
    SKUIReportAConcernConfiguration * _configuration;
    SKUIReportAConcernDetailsDataSource * _dataSource;
    double  _keyboardHeight;
    SKUIReportAConcernMetadata * _metadata;
    UITableView * _tableView;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) SKUIReportAConcernConfiguration *configuration;
@property (nonatomic, retain) SKUIReportAConcernDetailsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight;
@property (nonatomic, retain) SKUIReportAConcernMetadata *metadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (double)_detailsCellHeight;
- (id)_detailsText;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id /* block */)completion;
- (id)configuration;
- (id)dataSource;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)keyboardHeight;
- (id)metadata;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)submitPressed:(id)arg1;
- (id)tableView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
