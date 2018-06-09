/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawingContext : NSObject {
    NSMutableArray * _actions;
    struct CGContext { } * _cgContext;
    NSAffineTransform * _currentTransform;
    struct __CFData { } * _data;
    struct CGDataConsumer { } * _dataConsumer;
    struct CGImage { } * _fillImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    CMDrawableMapper * _mapper;
    NSMutableArray * _transforms;
}

@property CMDrawableMapper *mapper;

- (void).cxx_destruct;
- (void)_addTransform:(id)arg1;
- (void)_applyTransform:(id)arg1;
- (struct CGContext { }*)_cgContext;
- (void)_closeContext;
- (void)_copyCGContext;
- (void)_playbackActions;
- (void)_restoreLastTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTransform:(id)arg2;
- (void)addDebugPath:(struct CGPath { }*)arg1;
- (void)addPath:(struct CGPath { }*)arg1;
- (void)addTransform:(id)arg1;
- (id)copyPDF;
- (float)currentScaleFactor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })currentTransform;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mapper;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pdfFrame;
- (void)restoreLastTransform;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillImage:(struct CGImage { }*)arg1;
- (void)setLineDash:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMapper:(id)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRectToGroup:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRectToPage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
