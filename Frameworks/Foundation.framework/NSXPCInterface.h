/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCInterface : NSObject {
    Protocol * _protocol;
    id  _reserved1;
    void * _reserved2;
}

@property Protocol *protocol;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (id)_allowedClassesForSelector:(SEL)arg1 reply:(bool)arg2;
- (Class)_customSubclass;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (bool)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (bool)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3;
- (void)_methodSignature:(id*)arg1 allowedClasses:(id*)arg2 forSelector:(SEL)arg3 isReply:(bool)arg4;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (Class)_returnClassForSelector:(SEL)arg1;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)protocol;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setProtocol:(id)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)version;
- (unsigned long long)versionForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)_as_credentialProviderExtensionInterface;
+ (id)_as_credentialProviderHostInterface;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callControllerHostInterface;
+ (id)cx_callControllerVendorInterface;
+ (id)cx_callDirectoryManagerDefaultHostInterface;
+ (id)cx_callDirectoryManagerMaintenanceHostInterface;
+ (id)cx_callDirectoryProviderHostInterface;
+ (id)cx_callDirectoryProviderVendorInterface;
+ (id)cx_providerHostInterface;
+ (id)cx_providerVendorInterface;

- (id)_cx_callControllerAllowedClasses;
- (id)_cx_callDirectoryManagerAllowedClasses;
- (id)_cx_callDirectoryProviderAllowedClasses;
- (id)_cx_providerAllowedClasses;
- (void)_cx_setAllowedClassesForCallControllerHostProtocol;
- (void)_cx_setAllowedClassesForCallControllerVendorProtocol;
- (void)_cx_setAllowedClassesForCallDirectoryManagerDefaultHostProtocol;
- (void)_cx_setAllowedClassesForCallDirectoryProviderHostProtocol;
- (id)cx_allowedClasses;
- (void)cx_setAllowedClassesForProviderHostProtocol;
- (void)cx_setAllowedClassesForProviderVendorProtocol;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (void)ls_setArgumentClasses:(id)arg1 replyClasses:(id)arg2 forSelector:(SEL)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)_cachedSetForArrayOfClass:(Class)arg1;
- (id)hk_setArrayOfClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hm_setupRemoteHostInterface;
+ (id)hm_setupRemoteServiceInterface;
+ (id)hm_userManagementRemoteHostInterface;
+ (id)hm_userManagementRemoteServiceInterface;

// Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup

+ (id)il_classificationUIExtensionHostInterface;
+ (id)il_classificationUIExtensionVendorInterface;
+ (id)il_messageFilterExtensionHostInterface;
+ (id)il_messageFilterExtensionVendorInterface;
+ (id)il_messageFilterHostInterface;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_mailComposeRemoteHostInterface;
+ (id)mf_mailComposeRemoteServiceInterface;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (id)__mf_messageComposerExtensionInterface;
+ (id)__mf_messageComposerHostInterface;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_addClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)af_siriTaskDeliveringInterface;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)geo_MapsPushDaemonFromGeodInterface;

@end
