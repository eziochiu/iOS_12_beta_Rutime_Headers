/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKArtworkImageView : UIImageView {
    UIImageView * _cachedBadgeView;
    <MKArtworkImageSource> * _imageSource;
}

@property (nonatomic, readonly) UIImageView *badgeView;
@property (nonatomic, retain) <MKArtworkImageSource> *imageSource;

- (void).cxx_destruct;
- (void)_updateImageView;
- (id)badgeView;
- (id)imageSource;
- (void)setImageSource:(id)arg1;

@end
