/* made by EzioChiu.
 */

@protocol _UITextContent <NSObject>

@required

- (NSLayoutManager *)layoutManager;
- (NSTextContainer *)textContainer;
- (NSTextStorage *)textStorage;

@end
