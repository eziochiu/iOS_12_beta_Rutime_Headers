/* made by EzioChiu.
 */

@protocol INUIExtensionHostContextDelegate <NSObject>

@required

- (void)extensionHostContext:(_INUIExtensionHostContext *)arg1 wantsToHandleIntent:(INIntent *)arg2;

@end
