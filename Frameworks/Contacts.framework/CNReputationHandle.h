/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNReputationHandle : NSObject <NSCopying> {
    NSString * _stringValue;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;

+ (id)descriptionForType:(long long)arg1;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (void)configureBuilder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStringValue:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (long long)type;

@end
