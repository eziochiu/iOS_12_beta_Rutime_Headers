/* made by EzioChiu.
 */

@protocol ACHTemplateSource <NSObject>

@required

- (NSString *)identifier;
- (NSURL *)localizationBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)propertyListBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)resourceBundleURLForTemplate:(ACHTemplate *)arg1;
- (long long)runCadence;
- (bool)sourceShouldRunForDate:(NSDate *)arg1;
- (NSURL *)stickerBundleURLForTemplate:(ACHTemplate *)arg1;
- (void)templatesForDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*

@optional

- (NSDictionary *)customPlaceholderValuesForTemplate:(ACHTemplate *)arg1;
- (NSObject<ACHTemplateSourceDelegate> *)delegate;
- (void)setDelegate:(NSObject<ACHTemplateSourceDelegate> *)arg1;
- (NSString *)textureFilenameForTemplate:(ACHTemplate *)arg1;

@end
