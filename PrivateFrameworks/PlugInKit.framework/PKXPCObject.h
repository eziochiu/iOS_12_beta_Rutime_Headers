/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKXPCObject : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _object;
}

@property (retain) NSObject<OS_xpc_object> *object;

+ (id)object:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;

@end
