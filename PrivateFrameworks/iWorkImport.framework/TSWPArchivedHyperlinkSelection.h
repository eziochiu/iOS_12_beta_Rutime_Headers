/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPArchivedHyperlinkSelection : TSPObject <TSKArchivedSelection> {
    TSWPHyperlinkSelection * _hyperlinkSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSWPHyperlinkSelection *hyperlinkSelection;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)hyperlinkSelection;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setHyperlinkSelection:(id)arg1;
- (void)setSelection:(id)arg1;

@end
