/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKRecordSchema : NSObject {
    NSArray * _fieldSchemas;
    NSString * _recordType;
}

@property (nonatomic, readonly, copy) NSArray *fieldNames;
@property (nonatomic, copy) NSArray *fieldSchemas;
@property (nonatomic, readonly, copy) NSString *recordType;

- (void).cxx_destruct;
- (id)fieldNames;
- (id)fieldSchemas;
- (id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2;
- (bool)isValidRecord:(id)arg1;
- (id)recordType;
- (void)setFieldSchemas:(id)arg1;

@end
