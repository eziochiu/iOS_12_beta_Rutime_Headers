/* made by EzioChiu.
 */

@protocol VNSerializing

@required

- (id)initWithState:(NSData *)arg1 error:(id*)arg2;
- (NSData *)serializeStateAndReturnError:(id*)arg1;

@end
