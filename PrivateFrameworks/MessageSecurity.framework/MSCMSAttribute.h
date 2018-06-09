/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSAttribute : NSObject <MSCMSAttributeCoder> {
    NSData * _attributeDERData;
    MSOID * _attributeType;
    NSArray * _attributeValues;
    struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; } * _encodedAttribute;
}

@property (retain) NSData *attributeDERData;
@property (readonly) MSOID *attributeType;
@property (readonly) NSArray *attributeValues;
@property struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*encodedAttribute;

+ (id)decodeAttribute:(struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)attributeDERData;
- (id)attributeType;
- (id)attributeValues;
- (void)dealloc;
- (id)encodeAttributeWithError:(id*)arg1;
- (struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)encodedAttribute;
- (struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)generateAttributeStruct;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithAttributeStruct:(struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)arg1 error:(id*)arg2;
- (id)initWithAttributeType:(id)arg1 values:(id)arg2;
- (id)initWithDER:(id)arg1;
- (void)setAttributeDERData:(id)arg1;
- (void)setEncodedAttribute:(struct Attribute { struct heim_oid { unsigned long long x_1_1_1; unsigned int *x_1_1_2; } x1; struct Attribute_value { unsigned int x_2_1_1; struct heim_base_data {} *x_2_1_2; } x2; }*)arg1;

@end
