/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraSource : NSObject {
    NSObject<OS_dispatch_queue> * _propertyQueue;
    _HMCameraSource * _source;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) _HMCameraSource *source;

- (void).cxx_destruct;
- (id)aspectRatio;
- (id)initWithSource:(id)arg1;
- (id)propertyQueue;
- (void)setSource:(id)arg1;
- (id)source;

@end
