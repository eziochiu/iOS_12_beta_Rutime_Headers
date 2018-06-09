/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPictureItemView : UIView {
    bool  _didDownloadImage;
    UIVisualEffectView * _effectView;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
    <GEOPictureItem> * _pictureItem;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) bool didDownloadImage;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) <GEOPictureItem> *pictureItem;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (bool)didDownloadImage;
- (id)effectView;
- (void)fetchImageIfNecessary;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)initWithPictureItem:(id)arg1 providerName:(id)arg2;
- (id)pictureItem;
- (void)setDidDownloadImage:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setPictureItem:(id)arg1;
- (void)setTitleLabelProviderName:(id)arg1;
- (void)setupSubviews;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateLabelsSettings;
- (void)updateUIForTheme:(id)arg1;

@end
