/* made by EzioChiu.
 */

@protocol AVTAvatarPickerDelegate <NSObject>

@required

- (void)avatarPicker:(id <AVTAvatarPicker>)arg1 didSelectAvatarRecord:(id <AVTAvatarRecord>)arg2;
- (void)avatarPickerDidEndCameraSession:(id <AVTAvatarPicker>)arg1;
- (void)avatarPickerWillStartCameraSession:(id <AVTAvatarPicker>)arg1;

@end
