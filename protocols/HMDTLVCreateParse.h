/* made by EzioChiu.
 */

@protocol HMDTLVCreateParse

@required

- (bool)_parseFromTLVData;
- (NSString *)descriptionWithIndent:(HMUIndent *)arg1;
- (NSData *)tlvData;

@end
