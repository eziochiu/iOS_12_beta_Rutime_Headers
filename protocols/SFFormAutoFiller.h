/* made by EzioChiu.
 */

@protocol SFFormAutoFiller <NSObject>

@required

- (void)annotateForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withValues:(NSDictionary *)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 focusFieldAfterFilling:(bool)arg4 fieldToFocus:(NSString *)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(bool)arg3 selectFieldAfterFilling:(NSString *)arg4;
- (void)autoFillFormSynchronouslyInFrame:(SFFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillOneTimeCodeFieldsInFrame:(SFFormAutoFillFrameHandle *)arg1 withValue:(NSString *)arg2;
- (void)automaticPasswordSheetDimissedInFrame:(SFFormAutoFillFrameHandle *)arg1 focusedPasswordControlUniqueID:(NSString *)arg2;
- (void)clearAutoFillMetadata;
- (void)collectFormMetadataForPrefillingAtURL:(NSURL *)arg1;
- (void)collectMetadataForTextField:(void *)arg1 inFrame:(void *)arg2 atURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, SFFormAutoFillFrameHandle *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSFormMetadata *, WBSFormControlMetadata *, void*
- (void)collectURLsForPrefillingAtURL:(NSURL *)arg1;
- (void)fillTextField:(NSString *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)removeAutomaticPasswordElementsInFrame:(SFFormAutoFillFrameHandle *)arg1 focusedPasswordControlUniqueID:(NSString *)arg2 passwordControlUniqueIDs:(NSArray *)arg3;
- (void)resumeLoadingAfterSavingFormData;
- (void)setFormControls:(NSArray *)arg1 areAutoFilled:(bool)arg2 andClearField:(NSString *)arg3 inFrame:(SFFormAutoFillFrameHandle *)arg4;
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(SFFormAutoFillFrameHandle *)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(NSString *)arg3 passwordControlUniqueIDs:(NSArray *)arg4 automaticPassword:(NSString *)arg5 blurAfterSubstitution:(bool)arg6;

@end
