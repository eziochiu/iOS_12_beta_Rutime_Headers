/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoSubDial : SKEffectNode {
    CLKDevice * _device;
    long long  _labelsFont;
    double  _labelsFontSize;
    double  _labelsRadius;
    double  _radius;
    struct CGSize { 
        double width; 
        double height; 
    }  _smallInner;
    struct CGSize { 
        double width; 
        double height; 
    }  _smallOuter;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) long long labelsFont;
@property (nonatomic, readonly) double labelsFontSize;
@property (nonatomic, readonly) double labelsRadius;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } smallInner;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } smallOuter;

+ (id)lower:(double)arg1 forDevice:(id)arg2;
+ (id)upper:(double)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)addNodes:(id)arg1;
- (id)addNodes:(id)arg1 to:(id)arg2;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)colorize:(id)arg1;
- (id)device;
- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;
- (long long)labelsFont;
- (double)labelsFontSize;
- (double)labelsRadius;
- (double)radius;
- (struct CGSize { double x1; double x2; })smallInner;
- (struct CGSize { double x1; double x2; })smallOuter;
- (void)updateTimeScale:(unsigned long long)arg1;

@end
