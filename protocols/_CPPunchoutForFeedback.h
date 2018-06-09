/* made by EzioChiu.
 */

@protocol _CPPunchoutForFeedback <NSObject>

@required

- (void)addUrls:(NSString *)arg1;
- (NSString *)bundleIdentifier;
- (void)clearUrls;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)label;
- (NSString *)name;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setUrls:(NSArray *)arg1;
- (NSArray *)urls;
- (NSString *)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;

@end
