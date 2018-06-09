/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSmartMusicMenuViewController : UITableViewController {
    FMSong * _currentSong;
    NSObject<OS_dispatch_queue> * _downloadQueue;
    NSDictionary * _entryIDsByMood;
    MiroMemory * _memory;
    bool  _observingAppWillResign;
    id  _playbackObserver;
    AVPlayer * _player;
    long long  _selectedRow;
    long long  _selectedSection;
    FMSong * _selectedSong;
    NSArray * _sortedMoodIDs;
    id  _timeObserver;
    <MiroMemoryEditorToolbarOwner> * _toolbarOwner;
}

@property (nonatomic, retain) FMSong *currentSong;
@property (nonatomic, retain) NSDictionary *entryIDsByMood;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, readonly) NSString *moodID;
@property (nonatomic) bool observingAppWillResign;
@property (nonatomic, retain) id playbackObserver;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) long long selectedRow;
@property (nonatomic) long long selectedSection;
@property (nonatomic, retain) FMSong *selectedSong;
@property (nonatomic, retain) NSArray *sortedMoodIDs;
@property (nonatomic, retain) id timeObserver;
@property (nonatomic) <MiroMemoryEditorToolbarOwner> *toolbarOwner;

- (void).cxx_destruct;
- (void)_addObserverForAppWillResign;
- (void)_addObserverForAvalaibleSongChange;
- (void)_addObserverForPlaybackEnded;
- (void)_addObserverForTextSizeDidChange;
- (void)_applicationWillResign;
- (id)_displayNameForMoodID:(id)arg1;
- (id)_indexPathForEntryID:(id)arg1;
- (void)_invalidateAutoEdit;
- (id)_moodIDForSection:(long long)arg1;
- (void)_pausePreview;
- (void)_postProgressUpdate:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_previewSong:(id)arg1;
- (void)_removeObserverForAppWillResign;
- (void)_removeObserverForPlaybackEnded;
- (id)_sectionIDToSortedSongUUIDsMapping;
- (id)_selectedTableViewCell;
- (bool)_setSelectedSection:(long long)arg1 andRow:(long long)arg2;
- (id)_sortedMoodIDs;
- (bool)canBecomeFirstResponder;
- (id)currentSong;
- (void)didReceiveMemoryWarning;
- (id)entryIDsByMood;
- (id)memory;
- (id)moodID;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)observingAppWillResign;
- (id)playbackObserver;
- (id)player;
- (void)scrollToSelectedIndexPath;
- (long long)selectedRow;
- (long long)selectedSection;
- (id)selectedSong;
- (void)setCurrentSong:(id)arg1;
- (void)setEntryIDsByMood:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setObservingAppWillResign:(bool)arg1;
- (void)setPlaybackObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSelectedRow:(long long)arg1;
- (void)setSelectedSection:(long long)arg1;
- (void)setSelectedSong:(id)arg1;
- (void)setSortedMoodIDs:(id)arg1;
- (void)setTimeObserver:(id)arg1;
- (void)setToolbarOwner:(id)arg1;
- (void)setup;
- (id)sortedMoodIDs;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)timeObserver;
- (id)toolbarOwner;
- (void)userTextSizeDidChange;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
