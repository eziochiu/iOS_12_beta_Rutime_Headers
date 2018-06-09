/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (id)paramWithError:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (void)setError:(id)arg1;

@end
