/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NADescriptionBuilder : NSObject {
    int  _activeComponent;
    NSString * _activePrefix;
    NSMutableString * _description;
    <NSObject> * _object;
    NSMutableString * _proem;
    bool  _useDebugDescription;
}

@property (nonatomic) int activeComponent;
@property (nonatomic, retain) NSString *activeMultilinePrefix;
@property (nonatomic) bool useDebugDescription;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)builderWithObject:(id)arg1;
+ (id)componentSeparator;
+ (id)descriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)nameObjectSeparator;
+ (id)succinctDescriptionForObject:(id)arg1;

- (void).cxx_destruct;
- (id)_activeComponentString;
- (int)activeComponent;
- (id)activeMultilinePrefix;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3 objectTransformer:(id /* block */)arg4;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(id /* block */)arg3;
- (id)appendBool:(bool)arg1 withName:(id)arg2;
- (id)appendBool:(bool)arg1 withName:(id)arg2 ifEqualTo:(bool)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFormat:(id)arg1;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(bool)arg3;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1 args:(char *)arg2;
- (id)appendPointer:(void*)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendString:(id)arg1;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)appendSuper;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(bool)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)build;
- (id)initWithObject:(id)arg1;
- (id)modifyBody:(id /* block */)arg1;
- (id)modifyProem:(id /* block */)arg1;
- (void)setActiveComponent:(int)arg1;
- (void)setActiveMultilinePrefix:(id)arg1;
- (void)setUseDebugDescription:(bool)arg1;
- (void)tryAppendKey:(id)arg1;
- (bool)useDebugDescription;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

- (id)appendCGFloat:(double)arg1 withName:(id)arg2;
- (id)appendCGFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendCGPoint:(struct CGPoint { double x1; double x2; })arg1 withName:(id)arg2;
- (id)appendCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withName:(id)arg2;
- (id)appendCGSize:(struct CGSize { double x1; double x2; })arg1 withName:(id)arg2;

@end
