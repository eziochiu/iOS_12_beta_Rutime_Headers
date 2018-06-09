/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKPaymentRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkTotal:(id)arg1 error:(id*)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (bool)isValidWithError:(id*)arg1;

@end