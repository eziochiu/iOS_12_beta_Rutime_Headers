/* made by EzioChiu.
 */

@protocol FCChannelProviding <FCTagProviding>

@required

- (NSString *)defaultSectionID;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (bool)isWhitelisted;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSArray *)sectionIDs;
- (bool)supportsNotifications;

@end
