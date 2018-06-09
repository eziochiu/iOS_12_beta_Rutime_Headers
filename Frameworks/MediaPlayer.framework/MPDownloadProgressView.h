/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDownloadProgressView : UIView {
    UIImage * _centerImage;
    UIImageView * _centerImageView;
    double  _downloadProgress;
    UIColor * _outerRingColor;
    UIView * _outerRingView;
    _MPDownloadProgressRingView * _progressView;
}

@property (nonatomic, retain) UIImage *centerImage;
@property (nonatomic) double downloadProgress;
@property (nonatomic, retain) UIColor *outerRingColor;

- (void).cxx_destruct;
- (id)centerImage;
- (double)downloadProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)outerRingColor;
- (void)setCenterImage:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setOuterRingColor:(id)arg1;

@end
