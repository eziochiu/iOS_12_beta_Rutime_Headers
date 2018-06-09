/* made by EzioChiu.
 */

@protocol NSItemProviderWriting <NSObject>

@required

+ (NSArray *)writableTypeIdentifiersForItemProvider;

- (NSProgress *)loadDataWithTypeIdentifier:(void *)arg1 forItemProviderCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;

- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
- (NSArray *)writableTypeIdentifiersForItemProvider;

@end
