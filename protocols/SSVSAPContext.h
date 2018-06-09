/* made by EzioChiu.
 */

@protocol SSVSAPContext <NSObject>

@required

- (NSData *)signatureWithData:(NSData *)arg1 error:(id*)arg2;
- (bool)verifyData:(NSMutableData *)arg1 withSignature:(NSData *)arg2 error:(id*)arg3;

@end
