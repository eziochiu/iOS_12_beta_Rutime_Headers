/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieView : UIView {
    <MPMovieViewDelegate> * _delegate;
}

@property (nonatomic) <MPMovieViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToWindow;
- (void)setDelegate:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
