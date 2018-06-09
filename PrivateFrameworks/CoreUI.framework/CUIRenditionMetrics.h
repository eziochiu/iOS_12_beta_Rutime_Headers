/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary1BottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary1TopRightMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary2BottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _auxiliary2TopRightMargin;
    double  _baseline;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentTopRightMargin;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    }  _crmFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _edgeBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _edgeTopRightMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _scale;
}

- (struct CGSize { double x1; double x2; })auxiliary1BottomLeftMargin;
- (struct CGSize { double x1; double x2; })auxiliary1TopRightMargin;
- (struct CGSize { double x1; double x2; })auxiliary2BottomLeftMargin;
- (struct CGSize { double x1; double x2; })auxiliary2TopRightMargin;
- (double)baseline;
- (struct CGSize { double x1; double x2; })contentBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGSize { double x1; double x2; })contentTopRightMargin;
- (struct CGSize { double x1; double x2; })edgeBottomLeftMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeRect;
- (struct CGSize { double x1; double x2; })edgeTopRightMargin;
- (bool)hasAlignmentEdgeMargins;
- (bool)hasOpaqueContentBounds;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1 edgeBottomLeft:(struct CGSize { double x1; double x2; })arg2 edgeTopRight:(struct CGSize { double x1; double x2; })arg3 contentBottomLeft:(struct CGSize { double x1; double x2; })arg4 contentTopRight:(struct CGSize { double x1; double x2; })arg5 baseline:(double)arg6 auxiliary1BottomLeft:(struct CGSize { double x1; double x2; })arg7 auxiliary1TopRight:(struct CGSize { double x1; double x2; })arg8 auxiliary2BottomLeft:(struct CGSize { double x1; double x2; })arg9 auxiliary2TopRight:(struct CGSize { double x1; double x2; })arg10 scalesVertically:(bool)arg11 scalesHorizontally:(bool)arg12 scale:(double)arg13;
- (id)initwithImageSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scale;
- (bool)scalesHorizontally;
- (bool)scalesVertically;

@end
