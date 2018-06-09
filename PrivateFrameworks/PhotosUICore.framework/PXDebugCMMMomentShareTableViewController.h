/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugCMMMomentShareTableViewController : UITableViewController {
    PHFetchResult * _momentShares;
    <PXDebugCMMMomentShareSelectionHandler> * _selectionHandler;
}

@property (nonatomic) <PXDebugCMMMomentShareSelectionHandler> *selectionHandler;

- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectionHandler;
- (void)setSelectionHandler:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
