/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingIvar : NSObject {
    NSString * _name;
    struct objc_ivar { } * _objcIvar;
    NSObject * _object;
    NSString * _typeDescription;
    const char * _typeEncoding;
    id  _value;
}

@property (nonatomic, readonly) bool isObject;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct objc_ivar { }*objcIvar;
@property (nonatomic) NSObject *object;
@property (nonatomic, copy) NSString *typeDescription;
@property (nonatomic) const char *typeEncoding;
@property (nonatomic) id value;
@property (nonatomic, readonly) NSString *valueDescription;

+ (id)ivarWithObjcIvar:(struct objc_ivar { }*)arg1 forObject:(id)arg2;

- (void)dealloc;
- (bool)isObject;
- (id)name;
- (struct objc_ivar { }*)objcIvar;
- (id)object;
- (void)setName:(id)arg1;
- (void)setObjcIvar:(struct objc_ivar { }*)arg1;
- (void)setObject:(id)arg1;
- (void)setTypeDescription:(id)arg1;
- (void)setTypeEncoding:(const char *)arg1;
- (void)setValue:(id)arg1;
- (id)typeDescription;
- (const char *)typeEncoding;
- (id)value;
- (id)valueDescription;

@end
