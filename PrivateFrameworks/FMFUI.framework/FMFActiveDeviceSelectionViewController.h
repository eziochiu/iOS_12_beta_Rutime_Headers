/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFActiveDeviceSelectionViewController : PSListController <FMFSessionDelegate, UITableViewDataSource, UITableViewDelegate> {
    FMFDevice * _currentActiveDevice;
    NSMutableArray * _deviceList;
    FMFSession * _fmfSession;
    FMFDevice * _nowActiveDevice;
    long long  _specifierStartIndex;
}

@property (nonatomic, retain) FMFDevice *currentActiveDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *deviceList;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FMFDevice *nowActiveDevice;
@property (nonatomic) long long specifierStartIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasActiveDeviceAtIndex:(unsigned long long)arg1;
- (bool)_hasThisDeviceAtIndex:(unsigned long long)arg1;
- (id)_specifierForRowIndex:(long long)arg1;
- (void)cancelActiveDeviceSelection;
- (id)currentActiveDevice;
- (id)deviceList;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)fmfSession;
- (id)initWithSession:(id)arg1;
- (id)nowActiveDevice;
- (void)reloadSpecifiersOnMainQueue;
- (void)saveActiveDeviceSelection;
- (void)setCurrentActiveDevice:(id)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (void)setNowActiveDevice:(id)arg1;
- (void)setSpecifierStartIndex:(long long)arg1;
- (void)sortDevicesList;
- (long long)specifierStartIndex;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
