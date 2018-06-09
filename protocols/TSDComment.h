/* made by EzioChiu.
 */

@protocol TSDComment <TSDAnnotation>

@required

- (void)commentWillBeAddedToDocumentRoot;
- (bool)isHighlight;
- (void)setStorage:(TSDCommentStorage *)arg1;
- (TSDCommentStorage *)storage;

@end
