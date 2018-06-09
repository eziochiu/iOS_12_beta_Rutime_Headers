/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *firstLineHeadIndent;
@property (nonatomic, copy) NSNumber *getParagraphSpacingBefore;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *headIndent;
@property (nonatomic, copy) NSNumber *lineHeightMultiple;
@property (nonatomic, copy) NSNumber *lineSpacing;
@property (nonatomic, copy) NSNumber *maximumLineHeight;
@property (nonatomic, copy) NSNumber *minimumLineHeight;
@property (nonatomic, copy) NSNumber *paragraphSpacing;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *tailIndent;

+ (id)paragraphStyle;
+ (id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)encodedClassName;
- (id)firstLineHeadIndent;
- (id)getParagraphSpacingBefore;
- (id)groupIdentifier;
- (id)headIndent;
- (id)lineHeightMultiple;
- (id)lineSpacing;
- (id)maximumLineHeight;
- (id)minimumLineHeight;
- (id)paragraphSpacing;
- (void)setAlignment:(id)arg1;
- (void)setFirstLineHeadIndent:(id)arg1;
- (void)setGetParagraphSpacingBefore:(id)arg1;
- (void)setHeadIndent:(id)arg1;
- (void)setLineHeightMultiple:(id)arg1;
- (void)setLineSpacing:(id)arg1;
- (void)setMaximumLineHeight:(id)arg1;
- (void)setMinimumLineHeight:(id)arg1;
- (void)setParagraphSpacing:(id)arg1;
- (void)setTailIndent:(id)arg1;
- (id)tailIndent;

@end
