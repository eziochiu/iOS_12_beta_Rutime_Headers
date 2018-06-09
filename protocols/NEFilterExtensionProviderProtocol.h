/* made by EzioChiu.
 */

@protocol NEFilterExtensionProviderProtocol <NEExtensionProviderProtocol>

@required

- (void)setExtensionIdentifier:(NSString *)arg1 deviceIdentifier:(NSString *)arg2;
- (void)startFilterWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NEFilterProviderConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateConfiguration:(NEFilterProviderConfiguration *)arg1;

@end
