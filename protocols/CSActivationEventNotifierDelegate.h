/* made by EzioChiu.
 */

@protocol CSActivationEventNotifierDelegate <NSObject>

@required

- (void)activationEventNotifier:(void *)arg1 event:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CSActivationEventNotifier *, CSActivationEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
