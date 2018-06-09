/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (nonatomic) bool allowContentScrolling;
@property (nonatomic, copy) NSArray *columns;
@property (nonatomic, retain) <SAUITemplateItem> *footerItem;
@property (nonatomic, retain) <SAUITemplateItem> *headerItem;
@property (nonatomic, copy) NSString *layoutStyle;
@property (nonatomic, copy) NSNumber *minimumRowHeight;
@property (nonatomic, copy) NSArray *rowStyleRules;
@property (nonatomic) bool showHeaderDivider;

+ (id)tabularData;
+ (id)tabularDataWithDictionary:(id)arg1 context:(id)arg2;

- (bool)allowContentScrolling;
- (id)columns;
- (id)encodedClassName;
- (id)footerItem;
- (id)groupIdentifier;
- (id)headerItem;
- (id)layoutStyle;
- (id)minimumRowHeight;
- (id)rowStyleRules;
- (void)setAllowContentScrolling:(bool)arg1;
- (void)setColumns:(id)arg1;
- (void)setFooterItem:(id)arg1;
- (void)setHeaderItem:(id)arg1;
- (void)setLayoutStyle:(id)arg1;
- (void)setMinimumRowHeight:(id)arg1;
- (void)setRowStyleRules:(id)arg1;
- (void)setShowHeaderDivider:(bool)arg1;
- (bool)showHeaderDivider;

@end
