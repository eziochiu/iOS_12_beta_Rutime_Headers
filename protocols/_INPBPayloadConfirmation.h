/* made by EzioChiu.
 */

@protocol _INPBPayloadConfirmation <NSObject>

@required

- (_INPBSelectionItem *)confirmationItem;
- (bool)hasConfirmationItem;
- (void)setConfirmationItem:(_INPBSelectionItem *)arg1;

@end
