/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCFUserNotification : NSObject {
    long long  _defaultButtonIndex;
    AMSDialog * _dialog;
    bool  _dismissOnHomeButton;
    bool  _dismissOnLock;
    bool  _displaysOnLockscreen;
    bool  _shouldDismissAfterUnlock;
    bool  _shouldDisplayAsTopMost;
    bool  _shouldPendInSetupIfNotAllowed;
    long long  _unlockActionButtonIndex;
    struct __CFUserNotification { } * _userNotification;
}

@property long long defaultButtonIndex;
@property bool dismissOnHomeButton;
@property bool dismissOnLock;
@property bool displaysOnLockscreen;
@property bool shouldDismissAfterUnlock;
@property bool shouldDisplayAsTopMost;
@property bool shouldPendInSetupIfNotAllowed;
@property long long unlockActionButtonIndex;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg1 outOptions:(unsigned long long*)arg2;
- (struct __CFUserNotification { }*)_createNotificationFromDictionary:(struct __CFDictionary { }*)arg1 options:(unsigned long long)arg2;
- (void)_handleResponseForNote:(struct __CFUserNotification { }*)arg1 keys:(struct ButtonKey { struct __CFString {} *x1; int x2; }*)arg2 completion:(id /* block */)arg3;
- (long long)defaultButtonIndex;
- (bool)dismissOnHomeButton;
- (bool)dismissOnLock;
- (bool)displaysOnLockscreen;
- (id)initWithDialog:(id)arg1;
- (void)presentWithCompletion:(id /* block */)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDismissOnHomeButton:(bool)arg1;
- (void)setDismissOnLock:(bool)arg1;
- (void)setDisplaysOnLockscreen:(bool)arg1;
- (void)setShouldDismissAfterUnlock:(bool)arg1;
- (void)setShouldDisplayAsTopMost:(bool)arg1;
- (void)setShouldPendInSetupIfNotAllowed:(bool)arg1;
- (void)setUnlockActionButtonIndex:(long long)arg1;
- (bool)shouldDismissAfterUnlock;
- (bool)shouldDisplayAsTopMost;
- (bool)shouldPendInSetupIfNotAllowed;
- (long long)unlockActionButtonIndex;

@end
