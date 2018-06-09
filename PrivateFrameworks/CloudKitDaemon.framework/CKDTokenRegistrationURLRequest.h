/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationURLRequest : CKDURLRequest {
    NSString * _apsEnvironmentString;
    NSData * _apsToken;
    NSString * _bundleID;
}

@property (nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSData *apsToken;
@property (nonatomic, retain) NSString *bundleID;

- (void).cxx_destruct;
- (id)apsEnvironmentString;
- (id)apsToken;
- (id)bundleID;
- (id)flowControlKey;
- (id)generateRequestOperations;
- (id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setApsEnvironmentString:(id)arg1;
- (void)setApsToken:(id)arg1;
- (void)setBundleID:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;

@end
