/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTTableModel : NSObject <GQDNameMappable> {
    struct __CFArray { } * mCells;
    unsigned short  mColumnCount;
    struct __CFArray { } * mColumnGroupDisplayTypes;
    struct __CFArray { } * mColumnVisibilities;
    struct __CFArray { } * mColumnWidths;
    unsigned short  mFooterRowCount;
    unsigned short  mHeaderColumnCount;
    unsigned short  mHeaderRowCount;
    struct __CFString { } * mName;
    bool  mNameVisible;
    int  mNumGroupLevels;
    unsigned short  mRowCount;
    struct __CFArray { } * mRowHeights;
    struct __CFArray { } * mRowVisibilities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (int)addColumnWidthFrom:(struct _xmlTextReader { }*)arg1;
- (int)addGroupLevelsFrom:(struct _xmlTextReader { }*)arg1;
- (int)addRowHeightFrom:(struct _xmlTextReader { }*)arg1;
- (id)cellAt:(unsigned short)arg1;
- (struct __CFArray { }*)cells;
- (unsigned short)columnCount;
- (void)dealloc;
- (unsigned short)firstVisibleColumn;
- (unsigned short)footerRowCount;
- (bool)hasGroupDisplayType:(unsigned short)arg1 level:(int)arg2 displayType:(int*)arg3 isTypeVisible:(bool*)arg4;
- (unsigned short)headerColumnCount;
- (unsigned short)headerRowCount;
- (float)heightForRow:(unsigned short)arg1;
- (bool)isNameVisible;
- (struct __CFString { }*)name;
- (int)numGroupLevels;
- (int)readAttributesForGrid:(struct _xmlTextReader { }*)arg1;
- (int)readAttributesForModel:(struct _xmlTextReader { }*)arg1;
- (unsigned short)rowCount;
- (void)setCells:(struct __CFArray { }*)arg1;
- (void)setNumGroupLevels:(int)arg1;
- (int)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(bool)arg4;
- (bool)visibilityForColumn:(unsigned short)arg1;
- (bool)visibilityForRow:(unsigned short)arg1;
- (float)widthForColumn:(unsigned short)arg1;

@end
