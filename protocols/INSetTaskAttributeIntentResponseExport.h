/* made by EzioChiu.
 */

@protocol INSetTaskAttributeIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INTask *)modifiedTask;
- (void)setModifiedTask:(INTask *)arg1;

@end
