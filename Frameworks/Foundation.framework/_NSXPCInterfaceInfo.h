/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCInterfaceInfo : NSObject {
    struct __CFDictionary { } * _knownSelectors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _knownSelectorsLock;
    struct __CFDictionary { } * _methodInfo;
    unsigned long long  _remoteVersion;
    Class  _xpcDOSubclass;
}

@property unsigned long long remoteVersion;

- (void)dealloc;
- (id)init;
- (unsigned long long)remoteVersion;
- (void)setRemoteVersion:(unsigned long long)arg1;

@end
