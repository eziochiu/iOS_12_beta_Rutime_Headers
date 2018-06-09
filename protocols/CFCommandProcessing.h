/* made by EzioChiu.
 */

@protocol CFCommandProcessing <NSObject>

@required

- (void)handleCommand:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: SABaseCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SABaseCommand *, void*
- (void)handleOneWayCommand:(SABaseCommand *)arg1;
- (void)isDeviceLockedWithPasscodeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
