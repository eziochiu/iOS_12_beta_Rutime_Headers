/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIImageView : TLKImageView <CNAvatarViewDelegate> {
    CNAvatarView * _avatarView;
    SFImage * _currentImage;
    SearchUIButton * _overlayPlayButton;
    unsigned long long  _searchUIStyle;
}

@property (retain) CNAvatarView *avatarView;
@property (retain) SFImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIButton *overlayPlayButton;
@property unsigned long long searchUIStyle;
@property (readonly) Class superclass;

+ (id)imageViewWithImage:(id)arg1 style:(unsigned long long)arg2;
+ (id)thumbnailForResult:(id)arg1;

- (void).cxx_destruct;
- (void)appIconDidChange:(id)arg1;
- (id)avatarView;
- (id)currentImage;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)overlayPlayButton;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (unsigned long long)searchUIStyle;
- (void)setAvatarView:(id)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setOverlayPlayButton:(id)arg1;
- (void)setSearchUIStyle:(unsigned long long)arg1;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithImage:(id)arg1 needsOverlayButton:(bool)arg2 preventImageScaling:(bool)arg3 useMinimumWidthIfPossible:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)willMoveToSuperview:(id)arg1;

@end
