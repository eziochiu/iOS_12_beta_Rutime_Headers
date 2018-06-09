/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerView : UIView {
    AVPlayerViewControllerContentView * _contentView;
    bool  _needsInitialLayout;
    UIScreen * _primaryScreen;
}

@property (nonatomic, readonly) AVPlayerViewControllerContentView *contentView;
@property (nonatomic) bool needsInitialLayout;
@property (nonatomic) UIScreen *primaryScreen;

- (void).cxx_destruct;
- (void)beginManagingContentView;
- (id)contentView;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (bool)needsInitialLayout;
- (id)primaryScreen;
- (void)setClipsToBounds:(bool)arg1;
- (void)setNeedsInitialLayout:(bool)arg1;
- (void)setPrimaryScreen:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
