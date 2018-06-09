/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountIdentifier;
    unsigned long long  _checkoutType;
    bool  _checkoutWithPlay;
    long long  _downloadIdentifier;
    NSNumber * _rentalKeyIdentifier;
    bool  _shouldValidateRentalInfo;
    NSArray * _sinfs;
}

@property (readonly) NSNumber *accountIdentifier;
@property unsigned long long checkoutType;
@property (getter=shouldCheckoutWithPlay, nonatomic) bool checkoutWithPlay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long downloadIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (nonatomic) bool shouldValidateRentalInfo;
@property (readonly) NSArray *sinfs;
@property (readonly) Class superclass;

- (id)accountIdentifier;
- (unsigned long long)checkoutType;
- (id)copyXPCEncoding;
- (void)dealloc;
- (long long)downloadIdentifier;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithSinfs:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)rentalKeyIdentifier;
- (void)setCheckoutType:(unsigned long long)arg1;
- (void)setCheckoutWithPlay:(bool)arg1;
- (void)setShouldValidateRentalInfo:(bool)arg1;
- (bool)shouldCheckoutWithPlay;
- (bool)shouldValidateRentalInfo;
- (id)sinfs;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

@end
