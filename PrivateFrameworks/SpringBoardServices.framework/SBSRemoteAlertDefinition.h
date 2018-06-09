/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertDefinition : NSObject <BSDescriptionProviding, BSXPCCoding> {
    bool  _forCarPlay;
    NSString * _impersonatedCarPlayAppIdentifier;
    NSString * _serviceName;
    NSDictionary * _userInfo;
    NSString * _vcClassName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForCarPlay, nonatomic) bool forCarPlay;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *impersonatedCarPlayAppIdentifier;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, readonly) NSString *viewControllerClassName;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)impersonatedCarPlayAppIdentifier;
- (id)init;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isForCarPlay;
- (id)serviceName;
- (void)setForCarPlay:(bool)arg1;
- (void)setImpersonatedCarPlayAppIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;
- (id)viewControllerClassName;

@end
