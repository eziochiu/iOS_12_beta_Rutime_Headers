/* made by EzioChiu.
 */

@protocol ATXHeuristicDataSourceProtocol

@required

+ (NSObject *)queryWithLua:(struct lua_State { }*)arg1 provider:(id <ATXHeuristicDataSources>)arg2 error:(id*)arg3;

- (id)init;
- (id)initWithDevice:(ATXHeuristicDevice *)arg1;

@end
