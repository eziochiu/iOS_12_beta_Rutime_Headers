/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAlertTemplateView : UIView {
    UIImage * _bgImage;
    UIImageView * _bgImageView;
    UICollectionView * _collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    NSArray * _viewsAbove;
    NSArray * _viewsBelow;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) NSArray *viewsAbove;
@property (nonatomic, retain) NSArray *viewsBelow;

- (void).cxx_destruct;
- (id)collectionView;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setBgImage:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setViewsAbove:(id)arg1;
- (void)setViewsBelow:(id)arg1;
- (id)viewsAbove;
- (id)viewsBelow;

@end
