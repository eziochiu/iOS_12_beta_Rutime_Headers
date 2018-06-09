/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (nonatomic) float bottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (readonly) Class superclass;
@property (nonatomic) float top;

+ (id)edgeInsets;
+ (id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2;

- (float)bottom;
- (id)encodedClassName;
- (id)groupIdentifier;
- (float)left;
- (float)right;
- (void)setBottom:(float)arg1;
- (void)setLeft:(float)arg1;
- (void)setRight:(float)arg1;
- (void)setTop:(float)arg1;
- (float)top;

@end
