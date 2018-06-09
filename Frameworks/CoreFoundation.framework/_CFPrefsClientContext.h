/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFPrefsClientContext : NSObject {
    id  _cfprefsd;
    NSObject<OS_xpc_object> * _entitlements;
    bool  _hasKVONotificationInFlight;
    bool  _impersonatingAnotherProcess;
    BOOL  _isPlatformBinary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFSet { } * _observedSources;
    struct __CFDictionary { } * _readPermissionsCache;
    struct __CFBoolean { } * _sandboxed;
    struct __CFDictionary { } * _suiteCache;
    unsigned long long  _token;
    struct __CFDictionary { } * _writePermissionsCache;
}

@end
