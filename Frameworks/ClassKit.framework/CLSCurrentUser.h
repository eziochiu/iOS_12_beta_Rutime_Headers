/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {
    int  _devMode;
    CLSPerson * _person;
    unsigned long long  _roles;
}

@property (nonatomic) int devMode;
@property (nonatomic, retain) CLSPerson *person;
@property (nonatomic) unsigned long long roles;

+ (id)magicValue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)devMode;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRole:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)person;
- (unsigned long long)roles;
- (void)setDevMode:(int)arg1;
- (void)setPerson:(id)arg1;
- (void)setRoles:(unsigned long long)arg1;

@end
