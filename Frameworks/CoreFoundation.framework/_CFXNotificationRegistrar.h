/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationRegistrar : _CFXNotificationRegistrationContainer {
    struct { 
        union { 
            struct __CFNull {} *empty; 
            _CFXNotificationRegistrationBase *child; 
            struct __CFDictionary {} *children; 
        } elements; 
        void *singleChildKey; 
        struct { /* ? */ } *callbacks; 
    }  _doubleWildcards;
    unsigned long long  _options;
    struct __CFDictionary { } * _tokenRegistrations;
    struct { 
        union { 
            struct __CFNull {} *empty; 
            _CFXNotificationRegistrationBase *child; 
            struct __CFDictionary {} *children; 
        } elements; 
        void *singleChildKey; 
        struct { /* ? */ } *callbacks; 
    }  _wildcardNames;
    struct { 
        union { 
            struct __CFNull {} *empty; 
            _CFXNotificationRegistrationBase *child; 
            struct __CFDictionary {} *children; 
        } elements; 
        void *singleChildKey; 
        struct { /* ? */ } *callbacks; 
    }  _wildcardObjects;
}

@property (readonly) bool isEmpty;

+ (Class)childClass;

- (struct __CFString { }*)_copyDebugDescription;
- (id)acquireDoubleWildcard:(void*)arg1 options:(unsigned long long)arg2;
- (id)acquireName:(struct __CFString { }*)arg1;
- (id)acquireWildcardName:(void*)arg1;
- (id)acquireWildcardObject:(struct __CFString { }*)arg1;
- (void)add:(struct __CFString { }*)arg1 object:(void*)arg2 observer:(void*)arg3 tokenRegistration:(id)arg4;
- (void)addChild:(id)arg1;
- (void)enumerateRegistrations:(id /* block */)arg1;
- (id)find:(unsigned long long)arg1;
- (void)find:(struct __CFString { }*)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(id /* block */)arg4;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)invalidate;
- (bool)isEmpty;
- (void)match:(struct __CFString { }*)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(id /* block */)arg4;
- (id)registrar;
- (void)remove:(unsigned long long)arg1;
- (void)removeChild:(id)arg1;

@end
