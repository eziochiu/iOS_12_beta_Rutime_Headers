/* made by EzioChiu.
 */

@protocol TIAssetManaging <NSObject>

@required

- (NSArray *)assetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2;
- (id /* block */)enabledInputModeIdentifiersProviderBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSArray *)enabledInputModes;
- (void)setEnabledInputModeIdentifiersProviderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, void*

@end
