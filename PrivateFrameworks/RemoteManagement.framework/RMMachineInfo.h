/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMMachineInfo : NSObject

+ (id)DMFKeyFromRMFKey:(id)arg1;
+ (void)confirmInfoWithDeviceIdentity:(id)arg1 completion:(id /* block */)arg2;
+ (void)machineInfoWithKeys:(id)arg1 challenge:(id)arg2 deviceIdentity:(id)arg3 supportedServerVersions:(id)arg4 completion:(id /* block */)arg5;
+ (void)machineInfoWithKeys:(id)arg1 completion:(id /* block */)arg2;

@end
