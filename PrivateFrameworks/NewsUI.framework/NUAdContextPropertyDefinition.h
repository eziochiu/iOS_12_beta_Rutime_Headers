/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdContextPropertyDefinition : NSObject <NSCopying> {
    id  _defaultValue;
    NSString * _keyPath;
    NUAdContextDefinition * _nestedDefinition;
    unsigned long long  _requirement;
    Class  _valueClass;
}

@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, retain) NUAdContextDefinition *nestedDefinition;
@property (nonatomic, readonly) unsigned long long requirement;
@property (nonatomic, readonly) Class valueClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValue;
- (id)description;
- (id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3;
- (id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4;
- (id)keyPath;
- (id)nestedDefinition;
- (unsigned long long)requirement;
- (void)setNestedDefinition:(id)arg1;
- (bool)validateValue:(id)arg1;
- (Class)valueClass;

@end
