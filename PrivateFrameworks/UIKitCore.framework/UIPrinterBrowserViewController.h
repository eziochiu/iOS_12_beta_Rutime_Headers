/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    NSMutableArray * _filteredOutPrinters;
    NSArray * _lastUsedPrinters;
    bool  _loaded;
    PKPrinter * _lockedPrinter;
    double  _maximumPopoverHeight;
    NSMutableArray * _otherPrinters;
    <UIPrinterBrowserOwner> * _ownerPanelViewController;
    NSMutableArray * _preferredPrinters;
    PKPrinterBrowser * _printerBrowser;
    double  _rowHeight;
    UIPrinterSearchingView * _searchingView;
    bool  _searchingViewConstraintsSet;
    bool  _shouldFilterPrinters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double maximumPopoverHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPrinter:(id)arg1 moreComing:(bool)arg2;
- (void)adjustPopoverSize;
- (void)dealloc;
- (void)didChangePreferredContentSize;
- (id)initWithOwnerViewController:(id)arg1;
- (void)loadView;
- (double)maximumPopoverHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)printerAtIndexPath:(id)arg1;
- (void)printerInfoButtonTapped:(id)arg1;
- (void)removePrinter:(id)arg1 moreGoing:(bool)arg2;
- (void)selectPrinter:(id)arg1;
- (void)setMaximumPopoverHeight:(double)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showCancelButton;
- (void)startPrinterBrowser;
- (void)stopPrinterBrowser;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSearching;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willEnterForeground;

@end
