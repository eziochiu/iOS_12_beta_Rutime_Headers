/* made by EzioChiu.
 */

@protocol CNDCoreTelephonyServices <NSObject>

@required

- (void)_CTServerConnectionCopyPhoneNumber:(struct __CTServerConnection { }*)arg1 :(int)arg2 :(id*)arg3 :(id*)arg4 :(id*)arg5 :(id*)arg6;
- (struct __CTServerConnection { }*)_CTServerConnectionCreateOnTargetQueue:(void *)arg1 :(void *)arg2 :(void *)arg3 :(void *)arg4; // needs 4 arg types, found 10: const struct __CFAllocator { }*, const struct __CFString { }*, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFString { }*, struct __CFDictionary { }*, void*
- (void)_CTServerConnectionRegisterBlockForNotification:(void *)arg1 :(void *)arg2 :(void *)arg3; // needs 3 arg types, found 8: struct __CTServerConnection { }*, const struct __CFString { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFDictionary { }*, void*
- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection { }*)arg1 :(const struct __CFString { }*)arg2;

@end
