/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationControllerRequestFactory : NSObject

+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id*)arg4;
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(bool)arg2 error:(id*)arg3;
+ (id)_logoutSAMLRequestStringWithError:(id*)arg1;

- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(bool)arg2;
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1;
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(bool)arg2;

@end
