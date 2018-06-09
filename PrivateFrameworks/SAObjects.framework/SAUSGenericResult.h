/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSGenericResult : SADomainObject

@property (nonatomic, retain) SAUIAppPunchOut *actionButton;
@property (nonatomic) bool centered;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, retain) SAUIImageResource *thumbnail;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSNumber *titleMaxLines;

+ (id)genericResult;
+ (id)genericResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionButton;
- (bool)centered;
- (id)descriptions;
- (id)encodedClassName;
- (id)footnote;
- (id)groupIdentifier;
- (id)secondaryTitle;
- (void)setActionButton:(id)arg1;
- (void)setCentered:(bool)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLines:(id)arg1;
- (id)thumbnail;
- (id)title;
- (id)titleMaxLines;

@end
