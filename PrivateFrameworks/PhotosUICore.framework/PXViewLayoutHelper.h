/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewLayoutHelper : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    unsigned long long  _languageDirection;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _reverseTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic) unsigned long long languageDirection;

- (double)_firstBaselineForView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_getFirstBaseline:(double*)arg1 lastBaseline:(double*)arg2 forView:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4;
- (void)_invalidateTransform;
- (double)_lastBaselineForView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_layoutView:(id)arg1 withLeadingEdge:(double)arg2 trailingEdge:(double)arg3 alignedToLeadingEdge:(bool)arg4;
- (void)_updateTransform;
- (double)bottomEdgeForView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (double)firstBaselineForView:(id)arg1;
- (id)init;
- (unsigned long long)languageDirection;
- (double)lastBaselineForView:(id)arg1;
- (void)layoutView:(id)arg1 withFirstBaseline:(double)arg2;
- (void)layoutView:(id)arg1 withLastBaseline:(double)arg2;
- (void)layoutView:(id)arg1 withLeadingEdge:(double)arg2 maximumTrailingEdge:(double)arg3;
- (void)layoutView:(id)arg1 withMinimumLeadingEdge:(double)arg2 trailingEdge:(double)arg3;
- (void)layoutView:(id)arg1 withMinimumTopEdge:(double)arg2;
- (void)layoutView:(id)arg1 withTrailingEdge:(double)arg2;
- (void)layoutView:(id)arg1 withVerticalCenter:(double)arg2;
- (void)layoutViewKeepingLeadingEdge:(id)arg1 withMaximumTrailingEdge:(double)arg2;
- (double)leadingEdgeForView:(id)arg1;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLanguageDirection:(unsigned long long)arg1;
- (double)topEdgeForView:(id)arg1;
- (double)trailingEdgeForView:(id)arg1;

@end
