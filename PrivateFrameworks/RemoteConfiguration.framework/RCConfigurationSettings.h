/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCConfigurationSettings : NSObject <RCSerializable> {
    NSString * _bundleID;
    RCDebugOverrides * _debugOverrides;
    RCDeviceInfo * _deviceInfo;
    NSArray * _requestInfos;
    NSString * _storefrontID;
    NSString * _userID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) RCDebugOverrides *debugOverrides;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RCDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *loggingKey;
@property (nonatomic, readonly) NSArray *requestInfos;
@property (nonatomic, readonly, copy) NSString *storefrontID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugOverrides;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (id)fallbackURL;
- (unsigned long long)hash;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)loggingKey;
- (id)requestInfos;
- (id)storefrontID;
- (id)userID;

@end
