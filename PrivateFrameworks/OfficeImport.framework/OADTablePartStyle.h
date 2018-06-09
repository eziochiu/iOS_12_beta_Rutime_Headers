/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTablePartStyle : NSObject {
    OADTableCellStyle * mCellStyle;
    OADTableTextStyle * mTextStyle;
}

+ (id)defaultStyle;

- (void)applyOverridesFrom:(id)arg1;
- (id)cellStyle;
- (void)dealloc;
- (id)description;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)shallowCopy;
- (id)textStyle;

@end