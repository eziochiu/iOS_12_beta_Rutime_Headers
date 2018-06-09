/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage> {
    UIImage * _imageObj;
}

@property (nonatomic, readonly) int blendMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fixedFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *imageObj;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double opacity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageObj;
- (id)name;
- (double)opacity;
- (void)setImageObj:(id)arg1;

@end
