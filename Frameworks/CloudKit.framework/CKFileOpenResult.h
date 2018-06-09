/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFileOpenResult : NSObject <NSSecureCoding> {
    NSFileHandle * _encryptedFileHandle;
    NSFileHandle * _fileHandle;
    NSNumber * _fileSize;
    struct _mkbbackupref { } * _handle;
}

@property (nonatomic, retain) NSFileHandle *encryptedFileHandle;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic) struct _mkbbackupref { }*handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFileHandle;
- (id)fileHandle;
- (id)fileSize;
- (struct _mkbbackupref { }*)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMobileKeyBagHandle:(struct _mkbbackupref { }*)arg1 path:(id)arg2 error:(id*)arg3;
- (void)setEncryptedFileHandle:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setHandle:(struct _mkbbackupref { }*)arg1;

@end
