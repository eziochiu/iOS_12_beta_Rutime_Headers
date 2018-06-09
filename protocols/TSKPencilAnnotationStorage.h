/* made by EzioChiu.
 */

@protocol TSKPencilAnnotationStorage <NSObject, TSPCopying>

@required

- (long long)attachedLocation;
- (long long)attachedType;
- (struct CGPoint { double x1; double x2; })centerOfStrokes;
- (PKDrawing *)drawingForTextRecognition;
- (NSData *)encodedDrawing;
- (struct CGPoint { double x1; double x2; })markupOffset;
- (bool)needsTextRecognition;
- (struct CGSize { double x1; double x2; })originalAttachedSize;
- (struct CGPath { }*)path;
- (TSUColor *)penColor;
- (double)percentOfPAContainedInParentRep;
- (struct CGSize { double x1; double x2; })rasterizedImageSize;
- (TSPData *)rasterizedImageTSPData;
- (bool)shouldResizeWithAnchor;
- (bool)shouldSplitAcrossAnchorRects;
- (unsigned long long)textBaselinesTouchedCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledBoundsOfStrokes;
- (unsigned long long)visibleStrokesCount;

@end
