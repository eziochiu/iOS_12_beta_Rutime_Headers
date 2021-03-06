/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUserInviteInformation : NSObject {
    bool  _administrator;
    bool  _remoteAccessAllowed;
    NSString * _userID;
}

@property (getter=isAdministrator, nonatomic, readonly) bool administrator;
@property (getter=isRemoteAccessAllowed, nonatomic, readonly) bool remoteAccessAllowed;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUser:(id)arg1 administrator:(bool)arg2 remoteAccess:(bool)arg3;
- (bool)isAdministrator;
- (bool)isRemoteAccessAllowed;
- (id)userID;

@end
