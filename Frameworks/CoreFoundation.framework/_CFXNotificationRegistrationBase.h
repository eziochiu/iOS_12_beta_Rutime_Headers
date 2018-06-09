/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationRegistrationBase : NSObject {
    struct os_lock_handoff_s { 
        struct _os_lock_type_handoff_s {} *osl_type; 
        unsigned long long _osl_handoff_opaque[1]; 
    }  _lock;
    _CFXNotificationRegistrationContainer * _parent;
}

@property (readonly) void*key;
@property (readonly) _CFXNotificationRegistrationContainer *parent;
@property (readonly) _CFXNotificationRegistrar *registrar;

+ (const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)keyCallbacks;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithParent:(id)arg1;
- (void*)key;
- (id)parent;
- (id)registrar;
- (void)removeFromParent;
- (void)setParent:(id)arg1;

@end
