/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
 */

@interface DeviceTypeDeviceIdentity : NSObject {
    NSString * _device_class;
    bool  _has_telephony;
    bool  _is_fpga;
    bool  _is_internal_build;
    bool  _is_ipad;
    bool  _is_ipod;
    NSString * _product_type;
    bool  _should_hactivate;
}

@property (nonatomic, readonly, copy) NSString *device_class;
@property (nonatomic, readonly) bool has_telephony;
@property (nonatomic, readonly) bool is_fpga;
@property (nonatomic, readonly) bool is_internal_build;
@property (nonatomic, readonly) bool is_ipad;
@property (nonatomic, readonly) bool is_ipod;
@property (nonatomic, readonly, copy) NSString *product_type;
@property (nonatomic, readonly) bool should_hactivate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;
- (id)device_class;
- (bool)has_telephony;
- (id)init;
- (bool)is_fpga;
- (bool)is_internal_build;
- (bool)is_ipad;
- (bool)is_ipod;
- (id)product_type;
- (bool)should_hactivate;

@end
