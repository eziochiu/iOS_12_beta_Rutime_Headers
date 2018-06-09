/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCountryInformation : NSObject <NSCopying> {
    NSString * _isoCountryCode;
    NSString * _name;
    NSString * _phoneticName;
}

@property (nonatomic, readonly, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *phoneticName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)name;
- (id)phoneticName;

@end
