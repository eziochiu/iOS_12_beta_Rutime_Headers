/* made by EzioChiu.
 */

@protocol SFAirDropClassroomTransferDelegate <NSObject>

@required

- (void)transferWithIdentifierWasAccepted:(NSString *)arg1;
- (void)transferWithIdentifierWasDeclined:(NSString *)arg1;

@end
