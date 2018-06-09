/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTableHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSArray *columnValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tableHeaderItem;
+ (id)tableHeaderItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)columnValues;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setColumnValues:(id)arg1;

@end
