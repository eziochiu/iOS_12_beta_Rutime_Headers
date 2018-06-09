/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse {
    NSString * _action;
    NSDictionary * _aps;
    NSString * _requestID;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) NSDictionary *aps;
@property (nonatomic, readonly, copy) NSString *requestID;

- (void).cxx_destruct;
- (id)action;
- (id)aps;
- (id)initWithData:(id)arg1;
- (id)requestID;

@end
