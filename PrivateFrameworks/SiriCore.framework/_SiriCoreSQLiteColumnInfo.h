/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn> {
    <SiriCoreSQLiteValue> * _defaultValue;
    long long  _identifier;
    bool  _isNotNull;
    bool  _isPrimaryKey;
    NSString * _name;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) <SiriCoreSQLiteValue> *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool isNotNull;
@property (nonatomic, readonly) bool isPrimaryKey;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)defaultValue;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(bool)arg4 isNotNull:(bool)arg5 defaultValue:(id)arg6;
- (bool)isNotNull;
- (bool)isPrimaryKey;
- (id)name;
- (id)type;

@end
