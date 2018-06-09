/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallPolicy : NSObject <NSSecureCoding> {
    bool  _autoUpdateEnabled;
    unsigned long long  _skipsAllowed;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool autoUpdateEnabled;
@property (nonatomic) unsigned long long skipsAllowed;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void)_setAutoUpdateEnabled:(bool)arg1;
- (void)_setType:(unsigned long long)arg1;
- (bool)autoUpdateEnabled;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstallPolicyType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSkipsAllowed:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)skipsAllowed;
- (unsigned long long)type;

@end
