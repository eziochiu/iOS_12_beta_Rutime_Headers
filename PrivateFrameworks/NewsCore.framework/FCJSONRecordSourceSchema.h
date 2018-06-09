/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCJSONRecordSourceSchema : NSObject <NSCopying> {
    NSArray * _allKeys;
    NSArray * _keys;
    NSArray * _localizableKeys;
    NSSet * _localizableKeysSet;
    NSString * _recordIDPrefix;
    NSString * _recordType;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly, copy) NSArray *localizableKeys;
@property (nonatomic, copy) NSSet *localizableKeysSet;
@property (nonatomic, readonly, copy) NSString *recordIDPrefix;
@property (nonatomic, readonly, copy) NSString *recordType;

- (void).cxx_destruct;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4;
- (bool)isLocalizableKey:(id)arg1;
- (id)keys;
- (id)localizableKeys;
- (id)localizableKeysSet;
- (id)recordIDPrefix;
- (id)recordType;
- (void)setLocalizableKeysSet:(id)arg1;

@end
