/* made by EzioChiu.
 */

@protocol OKPresentationReadiness <NSObject>

@required

- (bool)isReady:(bool)arg1;
- (void)notifyWhenBecomesReady:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)readyProgress:(bool)arg1;
- (void)removeAllReadyNotifications;

@end
