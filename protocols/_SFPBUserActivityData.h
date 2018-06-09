/* made by EzioChiu.
 */

@protocol _SFPBUserActivityData <NSObject>

@required

- (NSString *)activityType;
- (void)addUserInfo:(_SFPBUserActivityInfo *)arg1;
- (void)clearUserInfo;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setActivityType:(NSString *)arg1;
- (void)setUserInfos:(NSArray *)arg1;
- (_SFPBUserActivityInfo *)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfoCount;
- (NSArray *)userInfos;

@end
