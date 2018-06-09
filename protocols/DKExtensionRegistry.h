/* made by EzioChiu.
 */

@protocol DKExtensionRegistry <NSObject>

@required

- (void)addExtensionAdapter:(DKExtensionAdapter *)arg1;
- (void)enumerateExtensionAdaptersWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DKExtensionAdapter *, void*
- (Class)extensionClass;
- (Class)responseObjectClass;

@end
