/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactDetail : NSObject <NSCopying> {
    NSString * _context;
    SGDuplicateKey * _duplicateKey;
    unsigned long long  _extractionType;
    NSString * _label;
    NSString * _normalizedValue;
    SGRecordId * _recordId;
    NSString * _sourceKey;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) SGDuplicateKey *duplicateKey;
@property (nonatomic, readonly) unsigned long long extractionType;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *normalizedValue;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *value;

+ (id)contactDetail:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionType:(unsigned long long)arg8;
+ (id)contactDetailFromEntity:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duplicateKey;
- (unsigned long long)extractionType;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionType:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactDetail:(id)arg1;
- (id)label;
- (id)loadOrigin:(id)arg1;
- (id)normalizedValue;
- (id)recordId;
- (id)sourceKey;
- (unsigned long long)type;
- (id)value;

@end
