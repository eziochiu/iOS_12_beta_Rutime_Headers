/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSelectableGridCardSection : SFCardSection <NSCopying, NSSecureCoding, SFSelectableGridCardSection> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _entries;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSNumber * _initialSelectedIndex;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *entries;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, copy) NSNumber *initialSelectedIndex;
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
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initialSelectedIndex;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setEntries:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setInitialSelectedIndex:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end
