/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingUpdateReceiver : HMDAccessorySettingUpdateBase {
    NSNumber * _configurationVersion;
}

@property (nonatomic, readonly) NSNumber *configurationVersion;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)configurationVersion;
- (id)description;
- (id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 configurationVersion:(id)arg6 outError:(id*)arg7;
- (void)update;

@end
