/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSObject : NUJSProxy

+ (struct OpaqueJSClass { }*)jsClass;

- (id)JSValueWithContext:(id)arg1;
- (void)enumerateProperties:(id /* block */)arg1;
- (bool)hasProperty:(id)arg1;
- (id)toObject;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3;

@end
