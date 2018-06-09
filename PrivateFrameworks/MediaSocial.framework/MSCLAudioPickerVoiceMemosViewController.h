/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPickerVoiceMemosViewController : SKUIViewController <MSCLAudioPickerSourceViewController, MSCLAudioPlayerManagerDataSource, UITableViewDataSource, UITableViewDelegate> {
    MSCLAudioPlayerManager * _audioPlayerManager;
    NSDateFormatter * _dateFormatter;
    MSCLDurationFormatter * _durationFormatter;
    NSArray * _recordings;
    id /* block */  _selectionBlock;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)_durationFormatter;
- (void)_playButtonAction:(id)arg1;
- (id)_recordings;
- (void)_stopAudioPlayer;
- (id)audioPlayerManager:(id)arg1 playButtonForRepresentedObject:(id)arg2;
- (void)dealloc;
- (void)loadView;
- (id /* block */)selectionBlock;
- (void)setSelectionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
