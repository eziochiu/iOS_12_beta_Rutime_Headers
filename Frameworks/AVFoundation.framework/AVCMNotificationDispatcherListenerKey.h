/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    int (* _callback;
    NSString * _name;
    const void * _object;
    AVWeakReference * _weakReferenceToListener;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(id)arg3 object:(const void*)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(id)arg3 object:(const void*)arg4;
- (bool)isEqual:(id)arg1;

@end
