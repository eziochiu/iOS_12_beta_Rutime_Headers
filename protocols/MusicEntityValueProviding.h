/* made by EzioChiu.
 */

@protocol MusicEntityValueProviding <IKEntityValueProviding>

@required

- (id)valueForEntityProperty:(NSString *)arg1;
- (NSDictionary *)valuesForEntityProperties:(NSSet *)arg1;

@optional

+ (bool)supportsConcurrentLoadingOfEntityProperties;

@end
