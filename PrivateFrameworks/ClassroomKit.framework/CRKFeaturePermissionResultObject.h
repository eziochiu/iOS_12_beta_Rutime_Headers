/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding> {
    bool  _modifiable;
    unsigned long long  _permission;
}

@property (getter=isModifiable, nonatomic) bool modifiable;
@property (nonatomic) unsigned long long permission;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isModifiable;
- (unsigned long long)permission;
- (void)setModifiable:(bool)arg1;
- (void)setPermission:(unsigned long long)arg1;

@end
