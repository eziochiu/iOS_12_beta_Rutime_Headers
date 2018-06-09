/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPropertyMetadata : NSObject {
    Class  _classType;
    NSString * _defaultKey;
    id  _defaultValue;
    NSString * _getterName;
    NSString * _name;
    unsigned long long  _options;
    NSString * _setterName;
    BOOL  _type;
    NSString * _typeString;
}

@property (nonatomic, retain) Class classType;
@property (nonatomic, copy) NSString *defaultKey;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) NSString *getterName;
@property (nonatomic, copy) NSString *name;
@property (getter=isNumber, nonatomic, readonly) bool number;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) bool removeIfCollectionSetEmpty;
@property (nonatomic, readonly) bool removeIfSettingDefaultValue;
@property (nonatomic, copy) NSString *setterName;
@property (nonatomic, readonly) bool synchronizeOnSet;
@property (nonatomic) BOOL type;
@property (nonatomic, copy) NSString *typeString;

- (void).cxx_destruct;
- (Class)classType;
- (id)defaultKey;
- (id)defaultValue;
- (id)description;
- (id)getterName;
- (bool)isNumber;
- (id)name;
- (unsigned long long)options;
- (bool)removeIfCollectionSetEmpty;
- (bool)removeIfSettingDefaultValue;
- (void)setClassType:(Class)arg1;
- (void)setDefaultKey:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setGetterName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSetterName:(id)arg1;
- (void)setType:(BOOL)arg1;
- (void)setTypeString:(id)arg1;
- (id)setterName;
- (bool)synchronizeOnSet;
- (BOOL)type;
- (id)typeString;

@end