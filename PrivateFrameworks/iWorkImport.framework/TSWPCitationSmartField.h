/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray * _citationRecords;
    <TSWPCitationSmartFieldEditing> * _editingDelegate;
    bool  _isLocalizable;
}

@property (nonatomic, copy) NSArray *citationRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <TSWPCitationSmartFieldEditing> *editingDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocalizable;
@property (readonly) Class superclass;

+ (bool)isValidCitationField:(id)arg1;

- (void).cxx_destruct;
- (id)bibliographySmartField;
- (id)citationRecords;
- (id)copyWithContext:(id)arg1;
- (id)editingDelegate;
- (bool)isLocalizable;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setCitationRecords:(id)arg1;
- (void)setEditingDelegate:(id)arg1;
- (void)setIsLocalizable:(bool)arg1;
- (int)smartFieldKind;
- (bool)supportsDeepCopyForUndo;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
