/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEmbeddedMediaView : UIControl {
    <SKUIEmbeddedMediaViewDelegate> * _delegate;
    long long  _mediaType;
    NSString * _mediaURLString;
    MPMoviePlayerController * _moviePlayer;
    UIImageView * _playerDecorationView;
    UIImageView * _thumbnailReflectionView;
    UIImageView * _thumbnailView;
    bool  _usingInlinePlayback;
}

@property (nonatomic) <SKUIEmbeddedMediaViewDelegate> *delegate;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSString *mediaURLString;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic) bool showsThumbnailReflection;
@property (nonatomic) long long thumbnailContentMode;
@property (nonatomic, retain) UIImage *thumbnailImage;

- (void).cxx_destruct;
- (void)_didExitFullscreen:(id)arg1;
- (void)_didFinishPlayback:(id)arg1;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { double x1; double x2; })_sizeToFitImageSize:(struct CGSize { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_tearDownMoviePlayer;
- (id)_thumbnailView;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)beginPlaybackAnimated:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endPlaybackAnimated:(bool)arg1;
- (void)layoutSubviews;
- (long long)mediaType;
- (id)mediaURLString;
- (long long)playbackState;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setShowsThumbnailReflection:(bool)arg1;
- (void)setThumbnailContentMode:(long long)arg1;
- (void)setThumbnailImage:(id)arg1;
- (bool)showsThumbnailReflection;
- (long long)thumbnailContentMode;
- (id)thumbnailImage;

@end
