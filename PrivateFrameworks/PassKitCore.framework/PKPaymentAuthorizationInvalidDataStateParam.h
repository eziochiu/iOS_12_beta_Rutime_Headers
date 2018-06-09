/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam {
    NSArray * _clientErrors;
    long long  _dataType;
    NSError * _error;
    long long  _status;
}

@property (nonatomic, retain) NSArray *clientErrors;
@property (nonatomic) long long dataType;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long status;

+ (id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4;

- (void).cxx_destruct;
- (id)clientErrors;
- (long long)dataType;
- (id)description;
- (id)error;
- (void)setClientErrors:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
