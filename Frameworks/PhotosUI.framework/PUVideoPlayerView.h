/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoPlayerView : UIView {
    bool  _allowsEdgeAntialiasing;
    <PUVideoPlayerViewDelegate> * _delegate;
    bool  _isDisplayingPlaceholder;
    bool  _isDisplayingVideo;
    bool  _isReadyForVideoDisplay;
    UIImage * _placeholderImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _placeholderImageContentsRect;
    UIImageView * _previewImageView;
    NSArray * _previewImageViewConstraints;
    _PUVideoView * _videoView;
    NSArray * _videoViewConstraints;
    unsigned long long  _videoViewContentMode;
}

@property (nonatomic) bool allowsEdgeAntialiasing;
@property (nonatomic) <PUVideoPlayerViewDelegate> *delegate;
@property (nonatomic) bool isDisplayingPlaceholder;
@property (nonatomic) bool isDisplayingVideo;
@property (nonatomic) bool isReadyForVideoDisplay;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } placeholderImageContentsRect;
@property (nonatomic) unsigned long long videoViewContentMode;

- (void).cxx_destruct;
- (void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg1;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (bool)allowsEdgeAntialiasing;
- (void)configureWithAVPlayer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingPlaceholder;
- (bool)isDisplayingVideo;
- (bool)isReadyForVideoDisplay;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderImageContentsRect;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDisplayingPlaceholder:(bool)arg1;
- (void)setIsDisplayingVideo:(bool)arg1;
- (void)setIsReadyForVideoDisplay:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderImageContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoViewContentMode:(unsigned long long)arg1;
- (unsigned long long)videoViewContentMode;

@end
