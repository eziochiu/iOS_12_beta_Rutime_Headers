/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDMediaRemoteNowPlayingViewController : UIViewController <MCDPlayableContentQueueManagerDelegate> {
    UIBarButtonItem * _backButton;
    NSString * _expectedPlaybackBundleIdentifier;
    long long  _globalIndex;
    bool  _handledWillAppear;
    MCDPCModel * _model;
    NSDictionary * _nowPlayingInfo;
    MCDNowPlayingViewController * _nowPlayingViewController;
    UIBarButtonItem * _playbackQueueBarButtonItem;
    MCDPlayableContentQueueTableViewController * _playbackQueueViewController;
    MCDPlayableContentPlaybackManager * _queueManager;
    UILabel * _rightTitleLabel;
    UIBarButtonItem * _rightTitleLabelBarButtonItem;
    bool  _showNavigationBar;
    long long  _totalItemCount;
}

@property (nonatomic, retain) UIBarButtonItem *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *expectedPlaybackBundleIdentifier;
@property (nonatomic) long long globalIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *nowPlayingInfo;
@property (nonatomic, retain) MCDNowPlayingViewController *nowPlayingViewController;
@property (nonatomic, retain) MCDPlayableContentPlaybackManager *queueManager;
@property (nonatomic) bool showNavigationBar;
@property (readonly) Class superclass;
@property (nonatomic) long long totalItemCount;

- (void).cxx_destruct;
- (void)_adjustRightTitleLabelToFit;
- (void)_handleWillAppear;
- (void)_localeDidChange:(id)arg1;
- (void)_popViewControllerAnimated;
- (void)_updateBackButton;
- (id)backButton;
- (void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(id)arg1 presentViewController:(id)arg2;
- (void)contentManager:(id)arg1 shouldShowPlaybackQueue:(bool)arg2;
- (void)contentManagerCompletedAllPlayback:(id)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
- (void)contentManagerReloadData:(id)arg1;
- (void)dealloc;
- (id)expectedPlaybackBundleIdentifier;
- (long long)globalIndex;
- (id)initWithModel:(id)arg1;
- (id)nowPlayingInfo;
- (id)nowPlayingViewController;
- (id)preferredFocusEnvironments;
- (id)queueManager;
- (void)setBackButton:(id)arg1;
- (void)setExpectedPlaybackBundleIdentifier:(id)arg1;
- (void)setGlobalIndex:(long long)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNowPlayingViewController:(id)arg1;
- (void)setQueueManager:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setShowNavigationBar:(bool)arg1;
- (void)setTotalItemCount:(long long)arg1;
- (bool)showNavigationBar;
- (long long)totalItemCount;
- (void)upNextButtonTapped:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
