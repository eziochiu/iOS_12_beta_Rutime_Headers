/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPowerController : NSObject {
    int  __assertionIdentifierGenerator;
    NSMutableDictionary * __assertionsByIdentifier;
    unsigned long long  __backgroundTaskIdentifier;
    bool  __isBackgrounded;
    NSObject<OS_dispatch_queue> * __powerControllerQueue;
    unsigned int  __powerControllerQueue_powerPressureLevel;
    int  __powerPressureNotificationToken;
}

@property (nonatomic, readonly) int _assertionIdentifierGenerator;
@property (nonatomic, readonly) NSMutableDictionary *_assertionsByIdentifier;
@property (nonatomic, readonly) unsigned long long _backgroundTaskIdentifier;
@property (getter=_isBackgrounded, setter=_setBackgrounded:, nonatomic) bool _isBackgrounded;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_powerControllerQueue;
@property (setter=_powerControllerQueue_setPowerPressureLevel:, nonatomic) unsigned int _powerControllerQueue_powerPressureLevel;
@property (nonatomic, readonly) int _powerPressureNotificationToken;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (int)_assertionIdentifierGenerator;
- (id)_assertionsByIdentifier;
- (unsigned long long)_backgroundTaskIdentifier;
- (void)_endBackgroundTaskIfNeeded;
- (bool)_isBackgrounded;
- (id)_powerControllerQueue;
- (unsigned int)_powerControllerQueue_powerPressureLevel;
- (void)_powerControllerQueue_setPowerPressureLevel:(unsigned int)arg1;
- (int)_powerPressureNotificationToken;
- (void)_setBackgrounded:(bool)arg1;
- (void)_startBackgroundTaskIfNeeded;
- (void)addAssertionForIndentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (id)init;
- (unsigned int)powerPressureLevel;
- (void)removeAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;

@end
