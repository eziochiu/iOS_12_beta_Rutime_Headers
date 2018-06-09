/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncStateOperation : NSObject <MTSyncOperation> {
    long long  _dataClasses;
    bool  _isFromSync;
    long long  _type;
    NSString * _uuid;
}

@property (nonatomic) long long dataClasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromSync;
@property (nonatomic, readonly) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *uuid;

+ (id)_stringForDataClasses:(long long)arg1;
+ (id)_stringForType:(long long)arg1;
+ (id)operationFromMetaData:(id)arg1;
+ (id)operationWithType:(long long)arg1 dataClasses:(long long)arg2;
+ (id)operationWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataClasses;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 dataClasses:(long long)arg2;
- (id)initWithType:(long long)arg1 dataClasses:(long long)arg2 fromSync:(bool)arg3;
- (id)initWithUUID:(id)arg1 fromSync:(bool)arg2 type:(long long)arg3 dataClasses:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOperation:(id)arg1;
- (bool)isEquivalentToOperation:(id)arg1;
- (bool)isFromSync;
- (id)operationMetaData;
- (long long)priority;
- (bool)requiresResponse;
- (id)responseOperation;
- (bool)sendsEntireState;
- (void)setDataClasses:(long long)arg1;
- (void)setIsFromSync:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldRetry;
- (long long)type;
- (id)uuid;

@end
