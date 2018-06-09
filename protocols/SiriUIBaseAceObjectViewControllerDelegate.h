/* made by EzioChiu.
 */

@protocol SiriUIBaseAceObjectViewControllerDelegate <NSObject>

@required

- (bool)siriViewController:(id <SiriUIViewController>)arg1 openURL:(NSURL *)arg2;
- (void)siriViewController:(void *)arg1 openURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriUIViewController> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriViewController:(id <SiriUIViewController>)arg1 performAceCommands:(NSArray *)arg2;
- (void)siriViewController:(void *)arg1 performAceCommands:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriUIViewController> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
