/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPushNotificationParameters : NSObject <NSCopying, SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSString * _environmentName;
    NSMutableDictionary * _parameterDictionary;
    long long  _requestType;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *environmentName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mediaKinds;
@property (nonatomic, copy) NSString *notificationType;
@property (nonatomic, copy) NSDictionary *putParameters;
@property (nonatomic) long long requestType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyParametersDictionary;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)environmentName;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mediaKinds;
- (id)notificationType;
- (id)putParameters;
- (long long)requestType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setEnvironmentName:(id)arg1;
- (void)setMediaKinds:(id)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setPutParameters:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)valueForParameter:(id)arg1;

@end
