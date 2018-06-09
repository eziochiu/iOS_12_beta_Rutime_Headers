/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeVisualization : CHVisualization {
    <CHStrokeProvider> * __strokeProviderDrawn;
}

@property (nonatomic, retain) <CHStrokeProvider> *_strokeProviderDrawn;

- (id)_strokeProviderDrawn;
- (void)dealloc;
- (void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)set_strokeProviderDrawn:(id)arg1;

@end
