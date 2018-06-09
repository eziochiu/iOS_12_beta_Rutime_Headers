/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPKFactory : NSObject

+ (id)canvasViewController;
+ (id)canvasViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)drawing;
+ (id)drawingWithData:(id)arg1;
+ (id)drawingWithDrawing:(id)arg1;
+ (id)drawingWithStrokes:(id)arg1 fromDrawing:(id)arg2;
+ (id)imageRendererWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
+ (void)initialize;
+ (id)inkPicker;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 widthMultiplier:(double)arg3;
+ (id)inlineInkPickerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)pencilKitAvailable;
+ (id)recognizer;
+ (id)recongizerWithType:(int)arg1 mode:(int)arg2;
+ (id)stroke;
+ (id)strokePoint;
+ (id)strokeWithStroke:(id)arg1 points:(void*)arg2 count:(unsigned long long)arg3 copy:(bool)arg4;

@end
