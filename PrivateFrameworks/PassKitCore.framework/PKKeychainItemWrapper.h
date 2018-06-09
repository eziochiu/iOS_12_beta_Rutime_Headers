/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKKeychainItemWrapper : NSObject {
    NSMutableDictionary * genericPasswordQuery;
    NSMutableDictionary * keychainItemData;
    unsigned long long  type;
}

@property (nonatomic, retain) NSMutableDictionary *genericPasswordQuery;
@property (nonatomic, retain) NSMutableDictionary *keychainItemData;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)applySynchronizableValueToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)genericPasswordQuery;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4;
- (id)keychainItemData;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)setGenericPasswordQuery:(id)arg1;
- (void)setKeychainItemData:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)writeToKeychain;

@end
