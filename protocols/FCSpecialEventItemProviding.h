/* made by EzioChiu.
 */

@protocol FCSpecialEventItemProviding <NSObject, NSCopying>

@required

- (NSString *)actionTitle;
- (NSString *)actionUrlString;
- (<FCSpecialEventArticleProviding> *)asArticle;
- (<FCSpecialEventWebEmbedProviding> *)asWebEmbed;
- (NSString *)identifier;
- (unsigned long long)itemType;
- (NSString *)title;

@end
