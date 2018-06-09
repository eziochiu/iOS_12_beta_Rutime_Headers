/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {
    NSArray * _records;
}

@property (nonatomic, readonly) NSObject<PKCloudStoreCoding> *item;
@property (nonatomic, readonly) NSArray *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(bool)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)item;
- (id)records;

@end
