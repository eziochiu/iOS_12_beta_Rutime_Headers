/* made by EzioChiu.
 */

@protocol PUPhotoPickerActionHandler <NSObject>

@required

- (long long)actionType;
- (NSString *)actionTypeDescription;
- (void)performApperanceUpdateUsing:(PUPhotoPickerAppearance *)arg1;
- (void)promptDidChange:(NSString *)arg1;
- (long long)secondaryActionType;
- (void)setActionType:(long long)arg1;
- (void)setActionTypeDescription:(NSString *)arg1;
- (void)setSecondaryActionType:(long long)arg1;

@end
