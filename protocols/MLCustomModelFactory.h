/* made by EzioChiu.
 */

@protocol MLCustomModelFactory

@required

- (NSObject<MLCustomModel> *)customModelWithName:(NSString *)arg1 modelDescription:(MLModelDescription *)arg2 parameterDictionary:(NSDictionary *)arg3 error:(id*)arg4;

@end
