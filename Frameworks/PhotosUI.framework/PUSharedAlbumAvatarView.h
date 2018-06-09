/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSharedAlbumAvatarView : UIImageView {
    UIImage * _firstAvatar;
    UIGraphicsImageRenderer * _imageRenderer;
    CNMonogrammer * _monogrammer;
    UIImage * _secondAvatar;
    PHAssetCollection * _sharedAlbumCollection;
    UIImage * _thirdAvatar;
}

@property (nonatomic, retain) UIImage *firstAvatar;
@property (nonatomic, retain) UIGraphicsImageRenderer *imageRenderer;
@property (nonatomic, retain) CNMonogrammer *monogrammer;
@property (nonatomic, retain) UIImage *secondAvatar;
@property (nonatomic, retain) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic, retain) UIImage *thirdAvatar;

+ (id)_sharedSerialQueue;

- (void).cxx_destruct;
- (id)_getPersonOrPhotoOrInitialsForSubscriber:(id)arg1 contact:(id)arg2 outAvatarType:(unsigned long long*)arg3;
- (void)_renderAvatarsForAlbumCollection:(id)arg1;
- (void)_requestPersonPhoto:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_resetImages;
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_sizeForNumberOfAvatars:(unsigned long long)arg1;
- (void)_updateSubscriberAvatars;
- (void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1 meContact:(id)arg2 subscribers:(id)arg3;
- (void)embedInView:(id)arg1;
- (id)firstAvatar;
- (id)imageRenderer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)monogrammer;
- (void)prepareForReuse;
- (id)secondAvatar;
- (void)setFirstAvatar:(id)arg1;
- (void)setImageRenderer:(id)arg1;
- (void)setMonogrammer:(id)arg1;
- (void)setSecondAvatar:(id)arg1;
- (void)setSharedAlbumCollection:(id)arg1;
- (void)setThirdAvatar:(id)arg1;
- (id)sharedAlbumCollection;
- (id)thirdAvatar;

@end
