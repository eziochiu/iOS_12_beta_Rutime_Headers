/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHPointStrokeFIFO : CHPointFIFO {
    CHDrawing * _drawing;
    CHDrawing * _strokes;
}

@property (nonatomic, retain) CHDrawing *drawing;
@property (nonatomic, retain) CHDrawing *strokes;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (id)drawing;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
