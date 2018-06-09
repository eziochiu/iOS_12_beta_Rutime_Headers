/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupItemCellLayout : SKUIItemCellLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageBoundingSize;
    long long  _itemOfferStyle;
    UILabel * _itemOfferTextLabel;
    long long  _layoutStyle;
    long long  _lockupSize;
    SKUILockupMetadataView * _metadataView;
    bool  _playsInlineVideo;
    long long  _verticalAlignment;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoThumbnailSize;
    SKUIEmbeddedMediaView * _videoThumbnailView;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *categoryString;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSString *editorialBadgeString;
@property (nonatomic) struct CGSize { double x1; double x2; } imageBoundingSize;
@property (nonatomic, copy) NSString *itemCountString;
@property (nonatomic) long long itemOfferStyle;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long lockupSize;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) bool playsInlineVideo;
@property (nonatomic, copy) NSString *releaseDateString;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic, retain) UIImage *videoThumbnailImage;
@property (nonatomic) struct CGSize { double x1; double x2; } videoThumbnailSize;
@property (nonatomic) unsigned long long visibleFields;

+ (double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2;
+ (double)heightForLockupStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4;
+ (struct CGSize { double x1; double x2; })videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2;

- (void).cxx_destruct;
- (void)_beginVideoPlaybackAction:(id)arg1;
- (void)_initSKUILockupItemCellLayout;
- (bool)_isItemOfferHidden;
- (id)_itemOfferTextLabel;
- (void)_layoutHorizontal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutIconImageView;
- (void)_layoutVertical;
- (id)artistName;
- (id)categoryString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)editorialBadgeString;
- (void)endVideoPlaybackAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (id)itemCountString;
- (long long)itemOfferStyle;
- (void)layoutForItemOfferChange;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)lockupSize;
- (long long)numberOfUserRatings;
- (void)playInlineVideoWithURL:(id)arg1;
- (bool)playsInlineVideo;
- (void)prepareForReuse;
- (id)releaseDateString;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategoryString:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditorialBadgeString:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemCountString:(id)arg1;
- (void)setItemOfferStyle:(long long)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setLockupSize:(long long)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setPlaysInlineVideo:(bool)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVideoThumbnailImage:(id)arg1;
- (void)setVideoThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleFields:(unsigned long long)arg1;
- (id)title;
- (float)userRating;
- (long long)verticalAlignment;
- (id)videoThumbnailImage;
- (struct CGSize { double x1; double x2; })videoThumbnailSize;
- (unsigned long long)visibleFields;

@end
