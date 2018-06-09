/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {
    int  _netrbReason;
    int  _netrbState;
    struct __SCDynamicStore { } * _scDynamicStore;
    struct __CFRunLoopSource { } * _scRunLoopSource;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)getNETRBState:(int*)arg1 andReason:(int*)arg2;
- (id)init;
- (void)readNETRBState:(int*)arg1 andReason:(int*)arg2;
- (void)sendStateUpdate;

@end
