/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterSavedGroup : NSObject <NSSecureCoding> {
    NSString * _name;
    NSMutableDictionary * _parameters;
    NSString * _version;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *parameters;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)parameterForName:(id)arg1;
- (id)parameters;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
