/* made by EzioChiu.
 */

@protocol MSVMessageParserDelegate <NSObject>

@optional

- (void)parser:(MSVMessageParser *)arg1 didParseMessage:(NSData *)arg2;

@end
