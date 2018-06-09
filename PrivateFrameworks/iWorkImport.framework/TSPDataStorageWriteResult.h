/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataStorageWriteResult : NSObject {
    bool  _didCopyDataToPackage;
    <TSPCryptoInfo> * _encryptionInfo;
    NSString * _filename;
    bool  _isMissingData;
}

@property (nonatomic, readonly) bool didCopyDataToPackage;
@property (nonatomic, readonly) <TSPCryptoInfo> *encryptionInfo;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) bool isMissingData;

- (void).cxx_destruct;
- (bool)didCopyDataToPackage;
- (id)encryptionInfo;
- (id)filename;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(bool)arg3 isMissingData:(bool)arg4;
- (bool)isMissingData;

@end
