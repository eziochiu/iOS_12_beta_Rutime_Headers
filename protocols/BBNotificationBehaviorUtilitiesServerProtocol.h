/* made by EzioChiu.
 */

@protocol BBNotificationBehaviorUtilitiesServerProtocol <NSObject>

@required

- (void)getShouldPresentNotificationOfType:(void *)arg1 fromSenderWithDestinationID:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(bool)arg1;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(bool)arg1;

@end
