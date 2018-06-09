/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection> {
    TNSheetSelection * mSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TNSheetSelection *selection;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end