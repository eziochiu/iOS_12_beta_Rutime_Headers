/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MPAVItem * _avItem;
    _UIBackdropView * _backdropView;
    id /* block */  _completionHandler;
    bool  _hasAudio;
    bool  _hasSubtitles;
    MPAlternateTrack * _newAudioTrack;
    MPAlternateTrack * _newSubtitleTrack;
    MPAlternateTrack * _originalAudioTrack;
    MPAlternateTrack * _originalSubtitleTrack;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChanges;
- (void)_configurePopover;
- (void)_doneButtonTapped:(id)arg1;
- (id)_trackAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithAVItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
