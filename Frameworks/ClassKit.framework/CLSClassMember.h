/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSClassMember : CLSObject {
    NSString * _personID;
    unsigned long long  _roles;
}

@property (nonatomic, copy) NSString *personID;
@property (nonatomic) unsigned long long roles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)personID;
- (unsigned long long)roles;
- (void)setPersonID:(id)arg1;
- (void)setRoles:(unsigned long long)arg1;

@end
