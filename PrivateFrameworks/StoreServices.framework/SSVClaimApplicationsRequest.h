/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVClaimApplicationsRequest : SSRequest <SSXPCCoding> {
    long long  _claimStyle;
}

@property (nonatomic, readonly) long long claimStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)claimStyle;
- (id)copyXPCEncoding;
- (id)initWithClaimStyle:(long long)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
