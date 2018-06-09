/* made by EzioChiu.
 */

@protocol MPUHTMLParserState <NSObject>

@required

- (NSDictionary *)attributes;
- (NSArray *)tagStack;

@end
