/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSActivationEvent : NSObject {
    NSString * _UUID;
    NSDictionary * _activationInfo;
    NSString * _deviceId;
    unsigned long long  _hosttime;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) NSDictionary *activationInfo;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) unsigned long long hosttime;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)UUID;
- (id)_activationTypeString;
- (id)activationInfo;
- (id)deviceId;
- (unsigned long long)hosttime;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;
- (id)localizedDescription;
- (void)setActivationInfo:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setHosttime:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
