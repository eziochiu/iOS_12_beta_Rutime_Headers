/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionConfiguration : NSObject {
    HDXPCClient * _client;
    NSString * _clientApplicationIdentifier;
    NSString * _clientProcessBundleIdentifier;
    bool  _requiresCoreLocationAssertion;
    NSUUID * _sessionIdentifier;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly, copy) NSString *clientApplicationIdentifier;
@property (nonatomic, readonly, copy) NSString *clientProcessBundleIdentifier;
@property (nonatomic, readonly) bool requiresCoreLocationAssertion;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)client;
- (id)clientApplicationIdentifier;
- (id)clientProcessBundleIdentifier;
- (id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3 processBundleIdentifier:(id)arg4 applicationIdentifier:(id)arg5 requiresCoreLocationAssertion:(bool)arg6;
- (bool)requiresCoreLocationAssertion;
- (id)sessionIdentifier;
- (id)workoutConfiguration;

@end
