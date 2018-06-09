/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTableRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFTableRowCardSection> {
    bool  _alignRowsToHeader;
    SFTableAlignmentSchema * _alignmentSchema;
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _data;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int isSubHeader : 1; 
        unsigned int reducedRowHeight : 1; 
        unsigned int verticalAlign : 1; 
        unsigned int alignRowsToHeader : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isSubHeader;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    bool  _reducedRowHeight;
    NSArray * _richData;
    int  _separatorStyle;
    NSString * _tabGroupIdentifier;
    NSString * _tableIdentifier;
    NSString * _type;
    int  _verticalAlign;
}

@property (nonatomic) bool alignRowsToHeader;
@property (nonatomic, retain) SFTableAlignmentSchema *alignmentSchema;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isSubHeader;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) bool reducedRowHeight;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, copy) NSArray *richData;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tabGroupIdentifier;
@property (nonatomic, copy) NSString *tableIdentifier;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) int verticalAlign;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alignRowsToHeader;
- (id)alignmentSchema;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlignRowsToHeader;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsSubHeader;
- (bool)hasReducedRowHeight;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (bool)hasVerticalAlign;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isSubHeader;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)reducedRowHeight;
- (id)richData;
- (int)separatorStyle;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setRichData:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTabGroupIdentifier:(id)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerticalAlign:(int)arg1;
- (id)tabGroupIdentifier;
- (id)tableIdentifier;
- (id)type;
- (int)verticalAlign;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end
