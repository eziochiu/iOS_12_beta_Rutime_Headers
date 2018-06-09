/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditSnapStripView : UIView {
    NSArray * _indicatorInfos;
    PUStripViewInternal * _stripView;
}

@property (nonatomic, copy) NSArray *indicatorInfos;

- (void).cxx_destruct;
- (void)_updateStripView;
- (id)indicatorInfos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setIndicatorInfos:(id)arg1;

@end
