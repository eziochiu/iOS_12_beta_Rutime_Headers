/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkSmoothingDescriptor : NSObject {
    double  _stylusSmoothing;
    double  _touchSmoothing;
    double  _velocitySmoothing;
}

@property (nonatomic, readonly) double stylusSmoothing;
@property (nonatomic, readonly) double touchSmoothing;
@property (nonatomic, readonly) double velocitySmoothing;

+ (id)defaultSmoothingDescriptor;
+ (id)smoothingDescriptorWithStylus:(double)arg1 touch:(double)arg2 velocity:(double)arg3;

- (id)initWithStylusSmoothing:(double)arg1 touchSmoothing:(double)arg2 velocitySmoothing:(double)arg3;
- (double)stylusSmoothing;
- (double)touchSmoothing;
- (double)velocitySmoothing;

@end
