/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphTile : NSObject <CALayerDelegate> {
    CALayer * _caLayer;
    long long  _column;
    <HKGraphTileDrawingDelegate> * _drawingDelegate;
    bool  _tileDisplayedSinceSetNeedsDisplay;
}

@property (nonatomic, retain) CALayer *caLayer;
@property (nonatomic) long long column;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HKGraphTileDrawingDelegate> *drawingDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tileDisplayedSinceSetNeedsDisplay;

- (void).cxx_destruct;
- (id)caLayer;
- (long long)column;
- (void)configureTileWithScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 column:(long long)arg2;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawingDelegate;
- (bool)hidden;
- (id)initWithParentView:(id)arg1;
- (void)setCaLayer:(id)arg1;
- (void)setColumn:(long long)arg1;
- (void)setDrawingDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setNeedsDisplay;
- (bool)tileDisplayedSinceSetNeedsDisplay;

@end
