/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoBackgroundView : UIView {
    UIImageView * _backgroundPlaceholderImageView;
    UIView * _backgroundPlaceholderPosterImageView;
    UIView * _backgroundPlaceholderView;
    UIImageView * _customBackgroundImageView;
    NSString * _destinationName;
    long long  _destinationPlaceholderStyle;
    UIImageView * _iconView;
    UIView * _imageView;
    long long  _interfaceOrientation;
    id /* block */  _layoutSubviewsPostflightHandler;
    bool  _showDestinationPlaceholder;
}

@property (nonatomic, retain) UIImage *backgroundPlaceholderImage;
@property (nonatomic, retain) UIView *backgroundPlaceholderPosterImageView;
@property (nonatomic, readonly) UIView *backgroundPlaceholderView;
@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic) long long destinationPlaceholderStyle;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, copy) id /* block */ layoutSubviewsPostflightHandler;

- (void).cxx_destruct;
- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(long long)arg3;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_updateDestinationBackgroundViewAnimated:(bool)arg1;
- (id)backgroundPlaceholderImage;
- (id)backgroundPlaceholderPosterImageView;
- (id)backgroundPlaceholderView;
- (void)dealloc;
- (id)destinationName;
- (long long)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (void)layoutSubviews;
- (id /* block */)layoutSubviewsPostflightHandler;
- (id)qtIcon;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)setBackgroundPlaceholderPosterImageView:(id)arg1;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationPlaceholderStyle:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLayoutSubviewsPostflightHandler:(id /* block */)arg1;
- (void)setShowDestinationPlaceholder:(bool)arg1 animated:(bool)arg2;
- (void)setShowQTAudioOnlyUI:(bool)arg1;

@end
