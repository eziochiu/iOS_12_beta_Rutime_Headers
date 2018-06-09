/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _recordIDsToShare;
    NSArray * _recordIDsToShareReadWrite;
    NSArray * _recordIDsToUnshare;
}

@property (nonatomic, retain) NSArray *recordIDsToShare;
@property (nonatomic, retain) NSArray *recordIDsToShareReadWrite;
@property (nonatomic, retain) NSArray *recordIDsToUnshare;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToShare;
- (id)recordIDsToShareReadWrite;
- (id)recordIDsToUnshare;
- (void)setRecordIDsToShare:(id)arg1;
- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (void)setRecordIDsToUnshare:(id)arg1;

@end
