/* made by EzioChiu.
 */

@protocol TKProtocolSmartCardSlotNotification <TKProtocolSlotNotification>

@required

- (void)cardSessionRequested;

@end
