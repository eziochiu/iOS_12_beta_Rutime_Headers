/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoScrubberContainerViewController : UIViewController {
    <MiroVideoScrubberViewControllerDelegate> * _delegate;
    double  _elapsedTime;
    NSError * _error;
    double  _estimatedDuration;
    MiroVideoScrubberCollectionViewController * _filmstripViewController;
    UIScrollView * _internalScrubberScrollView;
    unsigned long long  _playbackTimeFormat;
    NSTimer * _playbackTimeHiddeTimer;
    NSObject * _playbackTimeObserver;
    unsigned long long  _playingStatus;
    double  _proposedDuration;
    MiroVideoScrubberView * _scrubber;
    UIScrollView * _scrubberContainerScrollView;
    bool  _scrubberContentsNeedUpdate;
    UILabel * _timeLabel;
    UIView * _timeLabelBackground;
}

@property (nonatomic) <MiroVideoScrubberViewControllerDelegate> *delegate;
@property (nonatomic) double elapsedTime;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) double estimatedDuration;
@property (nonatomic) MiroVideoScrubberCollectionViewController *filmstripViewController;
@property (nonatomic) UIScrollView *internalScrubberScrollView;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) unsigned long long playbackTimeFormat;
@property (nonatomic, retain) NSTimer *playbackTimeHiddeTimer;
@property (nonatomic, retain) NSObject *playbackTimeObserver;
@property (nonatomic) unsigned long long playingStatus;
@property (nonatomic) double proposedDuration;
@property (nonatomic) MiroVideoScrubberView *scrubber;
@property (nonatomic) UIScrollView *scrubberContainerScrollView;
@property (nonatomic) bool scrubberContentsNeedUpdate;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIView *timeLabelBackground;

- (void).cxx_destruct;
- (id)_labelTextWithFormat:(unsigned long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (void)_setCurrentTime:(double)arg1;
- (id)_stringFromTimeInterval:(double)arg1;
- (void)_updatePlayingStatus;
- (void)_updateTimeLabelWithElapsedInterval:(double)arg1 remainingInterval:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (double)elapsedTime;
- (id)error;
- (double)estimatedDuration;
- (id)filmstripViewController;
- (void)hideTimeLabelAfterDelay:(double)arg1;
- (void)hideTimeLabelTimerAction;
- (id)init;
- (id)internalScrubberScrollView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderImage;
- (unsigned long long)playbackTimeFormat;
- (id)playbackTimeHiddeTimer;
- (id)playbackTimeObserver;
- (unsigned long long)playingStatus;
- (double)proposedDuration;
- (id)scrubber;
- (id)scrubberContainerScrollView;
- (bool)scrubberContentsNeedUpdate;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setError:(id)arg1;
- (void)setFilmstripViewController:(id)arg1;
- (void)setInternalScrubberScrollView:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaybackTimeFormat:(unsigned long long)arg1;
- (void)setPlaybackTimeHiddeTimer:(id)arg1;
- (void)setPlaybackTimeObserver:(id)arg1;
- (void)setPlayingStatus:(unsigned long long)arg1;
- (void)setProposedDuration:(double)arg1;
- (void)setScrubber:(id)arg1;
- (void)setScrubberContainerScrollView:(id)arg1;
- (void)setScrubberContentsNeedUpdate:(bool)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTimeLabelBackground:(id)arg1;
- (void)showTimeLabelMomentarily;
- (id)timeLabel;
- (id)timeLabelBackground;
- (void)timeLabelForScrubbing;
- (void)updateScrubberWithPlayer:(id)arg1;
- (void)viewDidLoad;

@end
