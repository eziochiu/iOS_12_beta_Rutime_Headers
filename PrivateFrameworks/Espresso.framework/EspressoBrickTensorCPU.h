/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoBrickTensorCPU : EspressoBrickTensor {
    float * _rawPointer;
}

@property float*rawPointer;

- (float*)rawPointer;
- (void)setRawPointer:(float*)arg1;

@end
