/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REInteractionDescriptor : NSObject <NSCopying, REIndentedDescription> {
    NSString * _name;
    float  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) float weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
