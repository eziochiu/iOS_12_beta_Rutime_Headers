/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {
    PXUIImageTile * _imageTile;
    struct PXTileGeometry { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } frame; 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double alpha; 
        double zPosition; 
        bool hidden; 
        struct CGSize { 
            double width; 
            double height; 
        } contentSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentsRect; 
        void *coordinateSpaceIdentifier; 
    }  _imageTileGeometry;
    PXBasicTileUserData * _imageTileUserData;
    struct PXTileGeometry { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } frame; 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double alpha; 
        double zPosition; 
        bool hidden; 
        struct CGSize { 
            double width; 
            double height; 
        } contentSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentsRect; 
        void *coordinateSpaceIdentifier; 
    }  _initialTextTileGeometry;
    UILabel * _labelForLastBaselineLayout;
    PXViewLayoutHelper * _layoutHelper;
    PXTitleSubtitleUILabelTile * _textTile;
    struct PXTileGeometry { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } frame; 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double alpha; 
        double zPosition; 
        bool hidden; 
        struct CGSize { 
            double width; 
            double height; 
        } contentSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentsRect; 
        void *coordinateSpaceIdentifier; 
    }  _textTileGeometry;
    PXBasicTileUserData * _textTileUserData;
    PXBasicUIViewTileAnimator * _tileAnimator;
}

@property (nonatomic, readonly) PXViewLayoutHelper *layoutHelper;

- (void).cxx_destruct;
- (void)_layoutImageTile;
- (void)_layoutLabelForLastBaselineLayout;
- (void)_layoutTextTile;
- (void)_layoutTile:(id)arg1 withGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg2 userData:(id)arg3;
- (id)initWithRegionOfInterest:(id)arg1;
- (id)layoutHelper;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;

@end
