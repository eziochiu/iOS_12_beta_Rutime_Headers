/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <MPUNowPlayingDelegate, NUIContainerStackViewDelegate> {
    NSArray * _adamIDs;
    UILabel * _captionLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _captionLabelSize;
    MPMediaItem * _localMediaItem;
    NSString * _localMediaItemIdentifier;
    SearchUIButton * _playButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _playButtonSize;
    SFPunchout * _punchout;
}

@property (retain) NSArray *adamIDs;
@property (retain) UILabel *captionLabel;
@property struct CGSize { double x1; double x2; } captionLabelSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MPMediaItem *localMediaItem;
@property (retain) NSString *localMediaItemIdentifier;
@property (retain) SearchUIButton *playButton;
@property struct CGSize { double x1; double x2; } playButtonSize;
@property (retain) SFPunchout *punchout;
@property (readonly) Class superclass;

+ (id)font;
+ (id)localMediaItemForStoreIdentifiers:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)adamIDs;
- (void)buttonPressed;
- (id)captionLabel;
- (struct CGSize { double x1; double x2; })captionLabelSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)fetchLocalMediaItem;
- (id)localMediaItem;
- (id)localMediaItemIdentifier;
- (bool)matchesNowPlayingAudioItem;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(bool)arg2;
- (id)playButton;
- (struct CGSize { double x1; double x2; })playButtonSize;
- (id)punchout;
- (void)setAdamIDs:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCaptionLabelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalMediaItem:(id)arg1;
- (void)setLocalMediaItemIdentifier:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPunchout:(id)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (void)updatePlayState;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(bool)arg1;
- (void)updateWithResult:(id)arg1;

@end
