/* made by EzioChiu.
 */

@protocol _CPStartNetworkSearchFeedback <NSObject>

@required

- (int)endpoint;
- (bool)getHeaders:(id*)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)headers;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (int)lookupSelectionType;
- (unsigned long long)queryId;
- (void)setEndpoint:(int)arg1;
- (void)setHeaders:(NSDictionary *)arg1;
- (void)setHeaders:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setInput:(NSString *)arg1;
- (void)setLookupSelectionType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setTuscanyStatus:(int)arg1;
- (void)setUrl:(NSString *)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (int)tuscanyStatus;
- (NSString *)url;
- (NSString *)uuid;
- (unsigned long long)whichTrigger;

@end
