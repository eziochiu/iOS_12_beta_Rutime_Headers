/* made by EzioChiu.
 */

@protocol CKDetailsContactsManagerDelegate <NSObject>

@required

- (void)contactsManager:(CKDetailsContactsManager *)arg1 didRequestCallTypeForEntity:(CKEntity *)arg2 addresses:(NSArray *)arg3 abLabels:(NSArray *)arg4 faceTimeAudioEnabled:(bool)arg5;
- (void)contactsManagerViewModelsDidChange:(CKDetailsContactsManager *)arg1;

@end
