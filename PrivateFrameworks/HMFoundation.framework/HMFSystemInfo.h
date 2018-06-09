/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFSystemInfo : HMFObject {
    NSString * _model;
    NSString * _name;
    long long  _productClass;
    long long  _productPlatform;
    long long  _productVariant;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _regionInfo;
    NSString * _serialNumber;
    HMFSoftwareVersion * _softwareVersion;
    bool  _supportsBLE;
    NSString * _wifiInterfaceMACAddress;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) NSString *model;
@property (copy) NSString *name;
@property long long productClass;
@property long long productPlatform;
@property long long productVariant;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (copy) NSString *regionInfo;
@property (copy) NSString *serialNumber;
@property (copy) HMFSoftwareVersion *softwareVersion;
@property bool supportsBLE;
@property (copy) NSString *wifiInterfaceMACAddress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)systemInfo;

- (void).cxx_destruct;
- (void)__initialize;
- (id)init;
- (id)model;
- (id)name;
- (void)notifyNameUpdated:(id)arg1;
- (long long)productClass;
- (long long)productPlatform;
- (long long)productVariant;
- (id)propertyQueue;
- (id)regionInfo;
- (id)serialNumber;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductClass:(long long)arg1;
- (void)setProductPlatform:(long long)arg1;
- (void)setProductVariant:(long long)arg1;
- (void)setRegionInfo:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSupportsBLE:(bool)arg1;
- (void)setWifiInterfaceMACAddress:(id)arg1;
- (id)softwareVersion;
- (void)startMonitoringSystemChanges;
- (bool)supportsBLE;
- (id)wifiInterfaceMACAddress;
- (id)workQueue;

@end
