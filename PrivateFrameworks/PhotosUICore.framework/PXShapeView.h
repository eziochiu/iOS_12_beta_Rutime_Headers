/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXShapeView : UIView {
    UIColor * _fillColor;
    UIBezierPath * _path;
}

@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, copy) UIBezierPath *path;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)fillColor;
- (id)path;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
- (id)shapeLayer;

@end
