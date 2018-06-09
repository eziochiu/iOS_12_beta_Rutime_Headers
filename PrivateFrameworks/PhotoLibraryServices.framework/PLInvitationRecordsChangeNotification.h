/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    bool  _invitationRecordsDidChange;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, retain) PLGenericAlbum *album;
@property (nonatomic, readonly) bool invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;

- (void)_calculateDiffs;
- (struct NSObject { Class x1; }*)album;
- (bool)invitationRecordsDidChange;
- (id)name;
- (id)userInfo;

@end
