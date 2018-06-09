/* made by EzioChiu.
 */

@protocol _UIScreenEdgePanRecognizing <NSObject>

@required

- (<_UIScreenEdgePanRecognizingDelegate> *)delegate;
- (void)giveTouchIdentifiersToIgnore:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexSet *, void*
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned int)arg7;
- (id)initWithType:(long long)arg1;
- (bool)isRequiringLongPress;
- (unsigned long long)maxInitialTouches;
- (bool)recognizeAlongEdge;
- (bool)recognizeImmediatelyFromEdgeLocked;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id <_UIScreenEdgePanRecognizingDelegate>)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setRecognizeImmediatelyFromEdgeLocked:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (_UIScreenEdgePanRecognizerSettings *)settings;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;

@end
