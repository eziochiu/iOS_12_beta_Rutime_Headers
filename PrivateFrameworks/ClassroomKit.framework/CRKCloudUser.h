/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudUser : NSObject <NSSecureCoding> {
    bool  _HSA2;
    NSString * _identifier;
    bool  _managedAppleID;
}

@property (getter=isHSA2, nonatomic) bool HSA2;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isManagedAppleID, nonatomic) bool managedAppleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isManagedAppleID:(bool)arg2 isHSA2:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCloudUser:(id)arg1;
- (bool)isHSA2;
- (bool)isManagedAppleID;
- (bool)representsSameUserAsUser:(id)arg1;
- (void)setHSA2:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManagedAppleID:(bool)arg1;

@end
