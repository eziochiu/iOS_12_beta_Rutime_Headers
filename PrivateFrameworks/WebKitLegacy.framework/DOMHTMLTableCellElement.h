/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLTableCellElement : DOMHTMLElement

@property (copy) NSString *abbr;
@property (copy) NSString *align;
@property (copy) NSString *axis;
@property (copy) NSString *bgColor;
@property (readonly) int cellIndex;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property int colSpan;
@property (copy) NSString *headers;
@property (copy) NSString *height;
@property bool noWrap;
@property int rowSpan;
@property (copy) NSString *scope;
@property (copy) NSString *vAlign;
@property (copy) NSString *width;

- (id)_cellAbove;
- (id)abbr;
- (id)align;
- (id)axis;
- (id)bgColor;
- (int)cellIndex;
- (id)ch;
- (id)chOff;
- (int)colSpan;
- (id)headers;
- (id)height;
- (bool)noWrap;
- (int)rowSpan;
- (id)scope;
- (void)setAbbr:(id)arg1;
- (void)setAlign:(id)arg1;
- (void)setAxis:(id)arg1;
- (void)setBgColor:(id)arg1;
- (void)setCh:(id)arg1;
- (void)setChOff:(id)arg1;
- (void)setColSpan:(int)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setNoWrap:(bool)arg1;
- (void)setRowSpan:(int)arg1;
- (void)setScope:(id)arg1;
- (void)setVAlign:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)vAlign;
- (id)width;

@end
