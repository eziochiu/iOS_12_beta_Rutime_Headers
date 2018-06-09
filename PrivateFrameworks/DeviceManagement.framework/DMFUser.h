/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFUser : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _dataQuota;
    unsigned long long  _dataUsed;
    bool  _hasDataToSync;
    bool  _isCurrentUser;
    NSString * _username;
}

@property (nonatomic, readonly) unsigned long long dataQuota;
@property (nonatomic, readonly) unsigned long long dataUsed;
@property (nonatomic, readonly) bool hasDataToSync;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataQuota;
- (unsigned long long)dataUsed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDataToSync;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(bool)arg4 isCurrentUser:(bool)arg5;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)username;

@end
