/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTableAlignmentSchema : NSObject <NSCopying, NSSecureCoding, SFTableAlignmentSchema> {
    NSDictionary * _metadata;
    NSArray * _tableColumnAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSDictionary *metadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tableColumnAlignment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setTableColumnAlignment:(id)arg1;
- (id)tableColumnAlignment;

@end
