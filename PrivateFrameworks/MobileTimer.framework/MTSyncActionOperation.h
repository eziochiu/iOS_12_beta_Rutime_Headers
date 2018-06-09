/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncActionOperation : NSObject <MTSyncOperation> {
    long long  _action;
    NSDate * _actionDate;
    NSString * _identifier;
    bool  _isFromSync;
    MTTrigger * _trigger;
    NSString * _uuid;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSDate *actionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isFromSync;
@property (nonatomic, readonly) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTTrigger *trigger;
@property (nonatomic, copy) NSString *uuid;

+ (id)_stringForAction:(long long)arg1;
+ (id)operationFromMetaData:(id)arg1;
+ (id)operationWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;
+ (id)operationWithAction:(long long)arg1 identifier:(id)arg2 trigger:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)actionDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(long long)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 fromSync:(bool)arg2 action:(long long)arg3 actionDate:(id)arg4 identifier:(id)arg5 trigger:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOperation:(id)arg1;
- (bool)isEquivalentToOperation:(id)arg1;
- (bool)isFromSync;
- (id)operationMetaData;
- (long long)priority;
- (bool)requiresResponse;
- (id)responseOperation;
- (void)setAction:(long long)arg1;
- (void)setActionDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFromSync:(bool)arg1;
- (void)setTrigger:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldRetry;
- (id)trigger;
- (id)uuid;

@end
