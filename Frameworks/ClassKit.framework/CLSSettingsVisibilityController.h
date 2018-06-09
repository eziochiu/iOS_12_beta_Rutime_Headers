/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser * _currentUser;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)currentUser;
- (void)currentUserChanged;
- (void)dealloc;
- (bool)hasCapableAccount;
- (bool)hasSupportedRole;
- (id)init;
- (bool)settingsUIVisible;

@end
