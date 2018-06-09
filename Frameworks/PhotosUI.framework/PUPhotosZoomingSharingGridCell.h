/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {
    unsigned long long  _badgesLayoutAnchor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _defaultBounds;
    UIView * _optionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _optionViewDefaultCenter;
    UIView * _selectionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _selectionViewDefaultCenter;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionView:(id)arg2 optionView:(id)arg3 layoutAnchor:(unsigned long long)arg4;
- (void)layoutSubviews;

@end
