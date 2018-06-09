/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCMapEntry : NSObject {
    bool  _showInTOC;
    TSWPTOCEntryStyle * _tocEntryStyle;
}

@property (nonatomic) bool showInTOC;
@property (nonatomic, retain) TSWPTOCEntryStyle *tocEntryStyle;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(bool)arg2;
- (void)setShowInTOC:(bool)arg1;
- (void)setTocEntryStyle:(id)arg1;
- (bool)showInTOC;
- (id)tocEntryStyle;

@end
