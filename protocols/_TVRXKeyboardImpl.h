/* made by EzioChiu.
 */

@protocol _TVRXKeyboardImpl <NSObject>

@required

- (TVRCKeyboardAttributes *)attributes;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)setKeyboardController:(_TVRXKeyboardController *)arg1;
- (void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1;
- (void)setText:(NSString *)arg1;
- (NSString *)text;

@optional

- (void)setTextActionPayload:(RTIDataPayload *)arg1;

@end
