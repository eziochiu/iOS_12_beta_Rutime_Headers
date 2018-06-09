/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardSection : NSObject <CRCardSection, NSCopying, SFCardSection, SFJSONSerializable> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _cardSectionId;
    NSArray * _commands;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _hideDivider;
    SFCard * _nextCard;
    NSArray * _parameterKeyPaths;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    NSString * _resultIdentifier;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, readonly) <SFCardSection> *backingCardSection;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasNextCard;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)cardSectionId;
- (id)commands;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (bool)hideDivider;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nextCard;
- (id)parameterKeyPaths;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (id)resultIdentifier;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHideDivider:(bool)arg1;
- (void)setNextCard:(id)arg1;
- (void)setParameterKeyPaths:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

+ (id)acs_uniquelyIdentifiedCardSection;

- (void)acs_addParameter:(id)arg1;
- (id)acs_parameterKeyPathFromParameter:(id)arg1;
- (void)acs_setParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)actionCommands;
- (id)backingCardSection;
- (id)cardSectionIdentifier;
- (bool)hasNextCard;
- (id)parametersForInteraction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end
