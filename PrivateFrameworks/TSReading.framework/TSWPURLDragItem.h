/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPURLDragItem : TSWPDragItem {
    struct CGPoint { 
        double x; 
        double y; 
    }  _canvasDragPoint;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } canvasDragPoint;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (struct CGPoint { double x1; double x2; })canvasDragPoint;
- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 canvasDragPoint:(struct CGPoint { double x1; double x2; })arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
