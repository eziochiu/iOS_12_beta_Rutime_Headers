/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedDouble : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)doubleValue;
- (id)initWithDouble:(double)arg1;
- (id)value;

@end
