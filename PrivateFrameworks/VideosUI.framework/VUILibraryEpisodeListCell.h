/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell <VUIDownloadButtonDelegate> {
    <VUILibraryEpisodeListCellDelegate> * _delegate;
    VUILabel * _dotSeparatorLabel;
    VUIDownloadButton * _downloadButton;
    double  _downloadProgress;
    long long  _downloadProgressType;
    NSString * _duration;
    VUILabel * _durationLabel;
    UIStackView * _episodeInfoStackView;
    _TVImageView * _imageView;
    NSString * _releaseDate;
    VUILabel * _releaseDateLabel;
    VUISeparatorView * _separatorView;
    bool  _supportsStartingDownload;
    NSString * _title;
    VUILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUILibraryEpisodeListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUILabel *dotSeparatorLabel;
@property (nonatomic, retain) VUIDownloadButton *downloadButton;
@property (nonatomic) double downloadProgress;
@property (nonatomic) long long downloadProgressType;
@property (nonatomic, copy) NSString *duration;
@property (nonatomic, retain) VUILabel *durationLabel;
@property (nonatomic, retain) UIStackView *episodeInfoStackView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic, retain) VUILabel *releaseDateLabel;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsStartingDownload;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) VUILabel *titleLabel;

+ (id)_episodePlaceholderImage;
+ (id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2;
+ (void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2;

- (void).cxx_destruct;
- (void)_addDownloadButtonIfRequired;
- (void)_configureDotSeparator;
- (bool)_contentSizeCategoryIsAccessibility;
- (double)_metadataHeightToBaselineNonAXContentSizeCategory;
- (double)_metadataScaledTopMarginForNonAXContentSizeCategory;
- (void)_removeDownloadButtonIfRequired;
- (void)_updateDownloadButtonWithProgressType:(long long)arg1 andProgress:(double)arg2;
- (id)delegate;
- (void)didSelectDownloadButton:(id)arg1;
- (id)dotSeparatorLabel;
- (id)downloadButton;
- (double)downloadProgress;
- (long long)downloadProgressType;
- (id)duration;
- (id)durationLabel;
- (id)episodeInfoStackView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)releaseDate;
- (id)releaseDateLabel;
- (id)separatorView;
- (void)setDelegate:(id)arg1;
- (void)setDotSeparatorLabel:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadProgressType:(long long)arg1;
- (void)setDownloadProgressType:(long long)arg1 andProgress:(double)arg2;
- (void)setDuration:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setEpisodeInfoStackView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseDateLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSupportsStartingDownload:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsStartingDownload;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
