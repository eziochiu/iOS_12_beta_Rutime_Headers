/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLBagInterpreter : NSObject <NSCopying> {
    NSMutableDictionary * _cachedBagValues;
    NSURL * _mescalPrimingURL;
    SSVSAPSignaturePolicy * _subscriptionSignaturePolicy;
    NSArray * _subscriptionSignedActions;
}

@property (nonatomic, readonly, copy) NSArray *AMDDomains;
@property (nonatomic, readonly, copy) NSURL *mescalCertificateURL;
@property (nonatomic, readonly, copy) NSURL *mescalPrimingURL;
@property (nonatomic, readonly, copy) NSURL *mescalSetupURL;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedActions;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedRequests;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedResponses;
@property (nonatomic, readonly, copy) NSURL *pastisCertificateURL;
@property (nonatomic, readonly, copy) NSURL *pastisKeyServerURL;
@property (nonatomic, readonly, copy) NSString *storeFrontSuffix;

- (void).cxx_destruct;
- (id)AMDDomains;
- (id)URLForURLBagKey:(id)arg1;
- (id)_valueForKey:(id)arg1 withClass:(Class)arg2;
- (id)cachedValueFromBag:(id)arg1 key:(id)arg2 withType:(unsigned long long)arg3 updateCache:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSSBag:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)mescalCertificateURL;
- (id)mescalPrimingURL;
- (id)mescalSetupURL;
- (id)mescalSignaturePolicyForRequestURL:(id)arg1;
- (id)mescalSignaturePolicyForResponseURL:(id)arg1;
- (id)mescalSignedActions;
- (id)mescalSignedRequests;
- (id)mescalSignedResponses;
- (id)pastisCertificateURL;
- (id)pastisKeyServerURL;
- (bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
- (id)storeFrontSuffix;
- (id)valueForURLBagKey:(id)arg1;

@end
