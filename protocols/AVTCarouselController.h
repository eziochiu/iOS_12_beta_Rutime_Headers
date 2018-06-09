/* made by EzioChiu.
 */

@protocol AVTCarouselController <AVTObjectViewController, AVTARFrameConsumer>

@required

- (double)decelerationRate;
- (void)displayAvatarRecordWithIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (<AVTAvatarRecord> *)focusedRecord;
- (void)lockOnFocusedViewAnimated:(bool)arg1;
- (void)presentActionsForAvatar:(id <AVTAvatarRecord>)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (void)reloadData;
- (void)setDecelerationRate:(double)arg1;
- (void)setSingleAvatarMode:(bool)arg1;
- (void)setSingleAvatarMode:(bool)arg1 animated:(bool)arg2;
- (bool)singleAvatarMode;
- (<AVTUIViewSnapshotProvider> *)snapshotProviderFocusedOnRecordWithIdentifier:(NSString *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)unlockFromFocusedViewAnimated:(bool)arg1;

@end
