/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalInformationRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSNumber * _rentalKeyIdentifier;
}

@property (readonly) NSNumber *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
