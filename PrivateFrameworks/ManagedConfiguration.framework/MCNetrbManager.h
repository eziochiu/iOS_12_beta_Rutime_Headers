/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCNetrbManager : NSObject {
    bool  _needStateUpdate;
    struct NETRBClient { } * _netClient;
    RadiosPreferences * _radioPrefs;
    int  _reason;
    struct __SCDynamicStore { } * _scDynamicStore;
    struct __CFRunLoopSource { } * _scRunLoopSource;
    int  _state;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)attachMIS;
- (void)authenticate;
- (void)cellDataChangedNotification:(id)arg1;
- (void)detachMIS;
- (bool)didUserPreventData;
- (void)getState:(int*)arg1 andReason:(int*)arg2;
- (id)init;
- (void)readMISState:(int*)arg1 andReason:(int*)arg2;
- (void)setState:(int)arg1;
- (void)stopService;

@end
