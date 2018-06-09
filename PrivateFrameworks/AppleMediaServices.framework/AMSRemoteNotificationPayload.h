/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSRemoteNotificationPayload : NSObject {
    ACAccount * _account;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _logKey;
    NSDictionary * _payload;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSNumber *accountIdentifier;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSDictionary *aps;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) long long priority;

+ (long long)actionTypeFromPayload:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)accountIdentifier;
- (long long)actionType;
- (id)aps;
- (id)clientIdentifier;
- (id)initWithPayload:(id)arg1;
- (id)logKey;
- (id)payload;
- (long long)priority;

@end
