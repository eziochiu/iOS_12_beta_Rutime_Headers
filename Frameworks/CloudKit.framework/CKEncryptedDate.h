/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedDate : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)date;
- (id)initWithDate:(id)arg1;
- (id)value;

@end
