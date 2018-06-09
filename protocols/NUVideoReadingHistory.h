/* made by EzioChiu.
 */

@protocol NUVideoReadingHistory

@required

- (void)markArticleAsReadWithVideoItem:(id <NUVideoItem>)arg1;
- (void)markArticleAsSeenWithVideoItem:(id <NUVideoItem>)arg1;

@end
