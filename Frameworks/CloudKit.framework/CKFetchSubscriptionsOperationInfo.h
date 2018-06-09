/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _isFetchAllSubscriptionsOperation;
    NSArray * _subscriptionIDs;
}

@property (nonatomic) bool isFetchAllSubscriptionsOperation;
@property (nonatomic, retain) NSArray *subscriptionIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFetchAllSubscriptionsOperation;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;

@end
