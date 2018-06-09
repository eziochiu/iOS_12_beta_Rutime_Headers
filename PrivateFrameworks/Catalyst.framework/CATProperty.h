/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATProperty : NSObject {
    long long  _association;
    SEL  _customGetterSelector;
    SEL  _customSetterSelector;
    NSString * _instanceVariableName;
    NSString * _name;
    bool  _nonAtomic;
    Class  _objectClass;
    bool  _readOnly;
    long long  _type;
    bool  _weakReference;
}

@property (nonatomic, readonly) long long association;
@property (nonatomic, readonly) SEL customGetterSelector;
@property (nonatomic, readonly) SEL customSetterSelector;
@property (nonatomic, readonly, copy) NSString *instanceVariableName;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isNonAtomic, nonatomic, readonly) bool nonAtomic;
@property (nonatomic, readonly) Class objectClass;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (nonatomic, readonly) long long type;
@property (getter=isWeakReference, nonatomic, readonly) bool weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForProtocol:(id)arg1;

- (void).cxx_destruct;
- (long long)association;
- (SEL)customGetterSelector;
- (SEL)customSetterSelector;
- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;
- (id)instanceVariableName;
- (bool)isNonAtomic;
- (bool)isReadOnly;
- (bool)isWeakReference;
- (id)name;
- (Class)objectClass;
- (long long)type;

@end