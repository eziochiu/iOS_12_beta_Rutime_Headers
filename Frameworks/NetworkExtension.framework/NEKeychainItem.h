/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _accessGroup;
    long long  _domain;
    NSString * _identifier;
    bool  _legacy;
    NEKeychainItem * _oldItem;
    NSString * _password;
    NSData * _persistentReference;
}

@property (copy) NSString *accessGroup;
@property long long domain;
@property (copy) NSString *identifier;
@property (readonly) bool legacy;
@property (copy) NEKeychainItem *oldItem;
@property (copy) NSString *password;
@property (copy) NSData *persistentReference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessGroup;
- (bool)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;
- (bool)copyDataFromKeychainItem:(void*)arg1 outPassword:(id*)arg2 outIdentifier:(id*)arg3 outPersistentReference:(id*)arg4;
- (id)copyKindForPasswordType:(long long)arg1;
- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (bool)legacy;
- (void)migrateFromPreferences:(struct __SCPreferences { }*)arg1;
- (id)oldItem;
- (id)password;
- (id)persistentReference;
- (void)remove;
- (void)setAccessGroup:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierInternal:(id)arg1;
- (void)setOldItem:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPersistentReference:(id)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;

@end
