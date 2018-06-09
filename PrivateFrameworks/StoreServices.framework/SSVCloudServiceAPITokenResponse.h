/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding> {
    NSString * _apiToken;
    NSError * _error;
}

@property (nonatomic, copy) NSString *apiToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)apiToken;
- (id)copyXPCEncoding;
- (id)error;
- (id)initWithToken:(id)arg1 error:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setApiToken:(id)arg1;
- (void)setError:(id)arg1;

@end
