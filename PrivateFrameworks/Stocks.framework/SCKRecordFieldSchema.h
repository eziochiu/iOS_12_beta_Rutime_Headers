/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKRecordFieldSchema : NSObject {
    bool  _encrypted;
    NSString * _name;
    bool  _required;
    Class  _valueClass;
}

@property (getter=isEncrypted, nonatomic) bool encrypted;
@property (nonatomic, copy) NSString *name;
@property (getter=isRequired, nonatomic) bool required;
@property (nonatomic, retain) Class valueClass;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(bool)arg3 encrypted:(bool)arg4;
- (bool)isEncrypted;
- (bool)isRequired;
- (bool)isValidRecord:(id)arg1;
- (id)name;
- (void)setEncrypted:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setValueClass:(Class)arg1;
- (Class)valueClass;

@end
