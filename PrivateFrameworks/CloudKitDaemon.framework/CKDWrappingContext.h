/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDWrappingContext : NSObject {
    NSString * _fieldName;
    NSData * _fileSignature;
    CKRecordID * _recordID;
    NSData * _referenceSignature;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, retain) NSData *fileSignature;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) NSData *referenceSignature;

- (void).cxx_destruct;
- (id)assetContextString;
- (id)encryptedDataContextString;
- (id)fieldName;
- (id)fileSignature;
- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4;
- (id)recordID;
- (id)referenceSignature;
- (void)setFieldName:(id)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setReferenceSignature:(id)arg1;

@end
