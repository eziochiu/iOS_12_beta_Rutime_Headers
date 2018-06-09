/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceInternal : NSObject {
    NSString * ID;
    NSData * MACAddress;
    unsigned long long  deviceFeatures;
    long long  deviceSubType;
    long long  deviceType;
    NSString * firmwareVersion;
    <AVOutputDeviceImpl> * impl;
    NSString * manufacturer;
    NSString * modelID;
    NSString * name;
    NSString * serialNumber;
}

@end
