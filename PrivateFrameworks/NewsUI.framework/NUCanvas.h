/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUCanvas : NULayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrame;
    NUViewNode * _viewNode;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastFrame;
@property (nonatomic, readonly) NUViewNode *viewNode;

+ (id)canvasWithSizer:(id)arg1 componentsBlock:(id /* block */)arg2;
+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg2 componentsBlock:(id /* block */)arg3;
+ (id)canvasWithSizer:(id)arg1 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg2 inNode:(id)arg3 componentsBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg3 componentsBlock:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastFrame;
- (void)layoutComponentsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutContext:(id)arg2;
- (void)layoutInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 traitCollection:(id)arg2;
- (void)layoutWithLayoutContext:(id)arg1;
- (id)resolveView;
- (void)setLastFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewNode;

@end