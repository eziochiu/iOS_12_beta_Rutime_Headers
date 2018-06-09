/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoListItemView : UIView {
    PHImageRequestOptions * __imageRequestOptions;
    NSArray * _constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSDateFormatter * _dateFormatter;
    bool  _isPerformingUpdates;
    NSLocale * _locale;
    bool  _needsUpdateConstraints;
    NSString * _sizeInGB;
    UILabel * _sizeLabel;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
    UIImage * _videoThumbnail;
    UIImageView * _videoThumbnailView;
}

@property (nonatomic, readonly) PHImageRequestOptions *_imageRequestOptions;
@property (setter=_setConstraints:, nonatomic, copy) NSArray *constraints;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSString *sizeInGB;
@property (nonatomic, retain) UILabel *sizeLabel;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIImage *videoThumbnail;
@property (nonatomic, readonly) UIImageView *videoThumbnailView;

- (void).cxx_destruct;
- (id)_createTextLabel;
- (id)_currentLocale;
- (id)_dateFormatter;
- (id)_imageRequestOptions;
- (void)_invalidateConstraints;
- (void)_setConstraints:(id)arg1;
- (id)_subtitleForAsset:(id)arg1;
- (id)_titleFromDate:(id)arg1;
- (void)_updateConstraintsIfNeeded;
- (id)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSubtitleDisplayable;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSizeInGB:(id)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVideoThumbnail:(id)arg1;
- (id)sizeInGB;
- (id)sizeLabel;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateItemViewWithAsset:(id)arg1;
- (id)videoThumbnail;
- (id)videoThumbnailView;

@end
