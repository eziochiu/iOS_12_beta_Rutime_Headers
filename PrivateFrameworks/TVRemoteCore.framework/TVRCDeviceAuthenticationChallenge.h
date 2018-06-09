/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCDeviceAuthenticationChallenge : NSObject {
    long long  _challengeType;
    NSString * _codeToEnterOnDevice;
    NSString * _deviceIdentifier;
}

@property (nonatomic, readonly) long long challengeType;
@property (nonatomic, readonly, copy) NSString *codeToEnterOnDevice;
@property (nonatomic, copy) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)_initWithDeviceIdentifier:(id)arg1 challengeType:(long long)arg2 codeToEnterOnDevice:(id)arg3;
- (void)cancel;
- (long long)challengeType;
- (id)codeToEnterOnDevice;
- (id)deviceIdentifier;
- (void)setDeviceIdentifier:(id)arg1;
- (void)userEnteredCodeLocally:(id)arg1;

@end
