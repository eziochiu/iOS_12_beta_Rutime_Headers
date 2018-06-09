/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPencilOverlayAnchorSelectionRectangle : NSObject {
    struct CGColor { } * _fillColor;
    struct CGColor { } * _strokeColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledSelectionRect;
}

@property (nonatomic) struct CGColor { }*fillColor;
@property (nonatomic) struct CGColor { }*strokeColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledSelectionRect;

- (void)dealloc;
- (struct CGColor { }*)fillColor;
- (id)initWithUnscaledRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeColor:(struct CGColor { }*)arg2 fillColor:(struct CGColor { }*)arg3;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setUnscaledSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGColor { }*)strokeColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledSelectionRect;

@end
