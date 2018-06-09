/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SASTComparisonEntity *firstItem;
@property (nonatomic, retain) SAUIDecoratedText *footnote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASTComparisonEntity *secondItem;
@property (readonly) Class superclass;

+ (id)comparisonItem;
+ (id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)firstItem;
- (id)footnote;
- (id)groupIdentifier;
- (id)secondItem;
- (void)setFirstItem:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setSecondItem:(id)arg1;

@end
