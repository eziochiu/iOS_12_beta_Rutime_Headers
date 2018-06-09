/* made by EzioChiu.
 */

@protocol NTKComplicationCollectionObserver <NSObject>

@optional

- (void)complicationCollection:(NTKComplicationCollection *)arg1 didRemoveSampleTemplatesForClient:(NSString *)arg2;
- (void)complicationCollection:(NTKComplicationCollection *)arg1 didUpdateSampleTemplateForClient:(NSString *)arg2;
- (void)complicationCollectionDidLoad:(NTKComplicationCollection *)arg1;

@end
