/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMediaSelectionTableViewController : UITableViewController {
    AVPlayerController * _playerController;
    AVMediaSelectionOption * _selectedAudioMediaSelectionOption;
    AVMediaSelectionOption * _selectedLegibleMediaSelectionOption;
}

@property (nonatomic, retain) AVPlayerController *playerController;

- (void).cxx_destruct;
- (bool)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
- (bool)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)playerController;
- (void)setPlayerController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
