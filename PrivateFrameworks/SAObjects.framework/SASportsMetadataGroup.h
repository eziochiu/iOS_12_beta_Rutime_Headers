/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic, copy) NSNumber *selected;
@property (readonly) Class superclass;

+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupTitle;
- (id)metadata;
- (id)selected;
- (void)setGroupTitle:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSelected:(id)arg1;

@end
