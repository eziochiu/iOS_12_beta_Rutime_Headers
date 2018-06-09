/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriterCopyDataResult : NSObject {
    <TSPCryptoInfo> * _encryptionInfo;
    NSString * _filename;
}

@property (nonatomic, readonly) <TSPCryptoInfo> *encryptionInfo;
@property (nonatomic, readonly) NSString *filename;

- (void).cxx_destruct;
- (id)encryptionInfo;
- (id)filename;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2;

@end
