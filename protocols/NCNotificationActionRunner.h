/* made by EzioChiu.
 */

@protocol NCNotificationActionRunner <NSObject>

@required

- (void)executeAction:(void *)arg1 fromOrigin:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationAction *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;

@end
