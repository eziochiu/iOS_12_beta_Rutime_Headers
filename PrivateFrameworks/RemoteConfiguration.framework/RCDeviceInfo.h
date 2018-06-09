/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCDeviceInfo : NSObject <RCSerializable> {
    NSString * _appVersion;
    NSString * _deviceType;
    long long  _dstOffset;
    NSString * _osVersion;
    NSArray * _preferredLanguages;
    long long  _utcOffset;
}

@property (nonatomic, readonly, copy) NSString *appVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceType;
@property (nonatomic, readonly) long long dstOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *osVersion;
@property (nonatomic, readonly, copy) NSArray *preferredLanguages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long utcOffset;

+ (id)defaultDeviceInfo;

- (void).cxx_destruct;
- (id)appVersion;
- (id)description;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (long long)dstOffset;
- (unsigned long long)hash;
- (id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)osVersion;
- (id)preferredLanguages;
- (long long)utcOffset;

@end
