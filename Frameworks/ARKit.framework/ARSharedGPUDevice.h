/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSharedGPUDevice : NSObject {
    <MTLDevice> * _device;
}

@property (nonatomic, retain) <MTLDevice> *device;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)device;
- (void)setDevice:(id)arg1;

@end
