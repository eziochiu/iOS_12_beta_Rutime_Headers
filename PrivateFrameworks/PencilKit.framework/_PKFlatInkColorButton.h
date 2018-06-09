/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKFlatInkColorButton : _PKInkColorButton {
    CAShapeLayer * _fillShapeLayer;
    CAShapeLayer * _strokeShapeLayer;
}

@property (nonatomic, retain) CAShapeLayer *fillShapeLayer;
@property (nonatomic, retain) CAShapeLayer *strokeShapeLayer;

- (void).cxx_destruct;
- (id)fillShapeLayer;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (void)layoutSubviews;
- (void)setFillShapeLayer:(id)arg1;
- (void)setStrokeShapeLayer:(id)arg1;
- (id)strokeShapeLayer;

@end
