/* made by EzioChiu.
 */

@protocol CKDProtobufMessageSigningDelegate <NSObject>

@required

- (void)generateSignature:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)updateSignatureWithTransmittedBytes:(NSData *)arg1;

@end
