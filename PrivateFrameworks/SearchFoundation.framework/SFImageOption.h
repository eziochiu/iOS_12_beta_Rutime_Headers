/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFImageOption : NSObject <NSCopying, NSSecureCoding, SFImageOption> {
    NSString * _defaultValue;
    NSString * _name;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *options;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValue;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)options;
- (void)setDefaultValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(id)arg1;

@end
