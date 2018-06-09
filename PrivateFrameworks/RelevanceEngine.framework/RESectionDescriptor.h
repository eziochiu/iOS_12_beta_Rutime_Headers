/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESectionDescriptor : NSObject <NSCopying, REIndentedDescription> {
    REHistoricSectionDescriptor * _historicSectionDescriptor;
    long long  _maxElementCount;
    NSString * _name;
    NSSet * _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REHistoricSectionDescriptor *historicSectionDescriptor;
@property (nonatomic) long long maxElementCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSSet *rules;
@property (readonly) Class superclass;

+ (id)defaultSectionDescriptorForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)historicSectionDescriptor;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maxElementCount;
- (id)name;
- (id)rules;
- (void)setHistoricSectionDescriptor:(id)arg1;
- (void)setMaxElementCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setRules:(id)arg1;

@end
