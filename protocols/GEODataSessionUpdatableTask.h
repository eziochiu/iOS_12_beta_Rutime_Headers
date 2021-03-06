/* made by EzioChiu.
 */

@protocol GEODataSessionUpdatableTask <NSObject>

@required

- (NSError *)error;
- (<NSObject> *)parsedResponse;
- (void)setError:(NSError *)arg1;
- (void)setParsedResponse:(id <NSObject>)arg1;

@end
