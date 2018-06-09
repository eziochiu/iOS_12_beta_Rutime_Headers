/* made by EzioChiu.
 */

@protocol UIActivityExtensionItemDataReceiving <NSObject>

@required

+ (Class)classForPreparingExtensionItemData;

- (void)prepareWithActivityExtensionItemData:(UISUIActivityExtensionItemData *)arg1;

@end
