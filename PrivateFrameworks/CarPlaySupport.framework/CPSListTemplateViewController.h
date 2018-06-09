/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <CPListTemplateProviding, UITableViewDelegate> {
    NSIndexPath * _currentSpinningIndexPath;
    CPSSectionedDataSource * _dataSource;
    NSIndexPath * _nextSpinningIndexPath;
    NSTimer * _spinnerStartTimer;
    unsigned long long  _spinnerState;
    NSTimer * _spinnerTimeoutTimer;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, copy) NSIndexPath *currentSpinningIndexPath;
@property (nonatomic, retain) CPSSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexPath *nextSpinningIndexPath;
@property (nonatomic, retain) NSTimer *spinnerStartTimer;
@property (nonatomic) unsigned long long spinnerState;
@property (nonatomic, retain) NSTimer *spinnerTimeoutTimer;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSpinnerToIndexPath:(id)arg1;
- (void)_cancelScheduledLoadingSpinnerForIndexPath:(id)arg1;
- (void)_cellSelectionCompleted:(id)arg1;
- (void)_scheduleLoadingSpinnerForIndexPath:(id)arg1;
- (void)_startSpinnerTimerFired:(id)arg1 indexPath:(id)arg2;
- (void)_timeoutSpinnerFired:(id)arg1 indexPath:(id)arg2;
- (id)currentSpinningIndexPath;
- (id)dataSource;
- (id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2;
- (id)listTemplate;
- (void)loadView;
- (id)nextSpinningIndexPath;
- (void)setButton:(id)arg1 enabled:(bool)arg2;
- (void)setButton:(id)arg1 hidden:(bool)arg2;
- (void)setCurrentSpinningIndexPath:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNextSpinningIndexPath:(id)arg1;
- (void)setSpinnerStartTimer:(id)arg1;
- (void)setSpinnerState:(unsigned long long)arg1;
- (void)setSpinnerTimeoutTimer:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (id)spinnerStartTimer;
- (unsigned long long)spinnerState;
- (id)spinnerTimeoutTimer;
- (id)spinnerView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)updateListItemsAndUpdate:(id)arg1;
- (void)updateSections:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
