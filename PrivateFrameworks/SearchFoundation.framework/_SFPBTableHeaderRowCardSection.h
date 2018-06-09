/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBTableHeaderRowCardSection : PBCodable <NSSecureCoding, _SFPBTableHeaderRowCardSection> {
    bool  _alignRowsToHeader;
    _SFPBTableAlignmentSchema * _alignmentSchema;
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _datas;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isSubHeader;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    bool  _reducedRowHeight;
    int  _separatorStyle;
    NSString * _tabGroupIdentifier;
    NSString * _tableIdentifier;
    NSString * _type;
    int  _verticalAlign;
}

@property (nonatomic) bool alignRowsToHeader;
@property (nonatomic, retain) _SFPBTableAlignmentSchema *alignmentSchema;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSArray *datas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSubHeader;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) bool reducedRowHeight;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tabGroupIdentifier;
@property (nonatomic, copy) NSString *tableIdentifier;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) int verticalAlign;

- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (bool)alignRowsToHeader;
- (id)alignmentSchema;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearData;
- (void)clearPunchoutOptions;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (id)datas;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSubHeader;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (bool)reducedRowHeight;
- (int)separatorStyle;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDatas:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTabGroupIdentifier:(id)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerticalAlign:(int)arg1;
- (id)tabGroupIdentifier;
- (id)tableIdentifier;
- (id)type;
- (int)verticalAlign;
- (void)writeTo:(id)arg1;

@end
