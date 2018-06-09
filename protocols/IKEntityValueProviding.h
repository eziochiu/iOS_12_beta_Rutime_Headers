/* made by EzioChiu.
 */

@protocol IKEntityValueProviding <NSObject>

@required

- (NSDictionary *)entityUniqueIdentifier;
- (NSURL *)imageURLForEntityArtworkProperty:(NSString *)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(NSString *)arg1;
- (NSDictionary *)valuesForEntityProperties:(NSSet *)arg1;

@optional

- (id)nativeValueForStringValue:(NSString *)arg1 forProperty:(NSString *)arg2;
- (NSString *)stringValueWithNativeValue:(id)arg1 forProperty:(NSString *)arg2;

@end
