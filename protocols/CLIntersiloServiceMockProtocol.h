/* made by EzioChiu.
 */

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>

@required

- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(NSMutableDictionary *)arg1 forSelector:(SEL)arg2;
- (NSMutableDictionary *)syncgetPayloadForKey:(NSString *)arg1;
- (NSMutableDictionary *)syncgetPayloadForSelector:(SEL)arg1;

@end
