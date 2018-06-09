/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedLocationArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *locationArray;
@property (readonly) Class superclass;

- (id)initWithLocationArray:(id)arg1;
- (id)locationArray;
- (id)value;

@end