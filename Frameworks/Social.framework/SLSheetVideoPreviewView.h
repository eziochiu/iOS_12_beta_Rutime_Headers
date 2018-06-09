/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {
    UILabel * _durationLabel;
    UIView * _infoBar;
    UIImageView * _videoGlyphView;
}

- (void).cxx_destruct;
- (void)_applyConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setVideoDuration:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
