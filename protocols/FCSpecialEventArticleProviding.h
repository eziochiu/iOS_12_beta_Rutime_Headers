/* made by EzioChiu.
 */

@protocol FCSpecialEventArticleProviding <FCSpecialEventItemProviding>

@required

- (NSString *)articleID;
- (NSDate *)displayDate;
- (NSString *)storyType;

@end
