/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDArchivedPencilAnnotationSelection : TSPObject <TSKArchivedSelection> {
    TSDPencilAnnotationSelection * _pencilAnnotationSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSDPencilAnnotationSelection *pencilAnnotationSelection;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)loadFromArchive:(const struct PencilAnnotationSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)pencilAnnotationSelection;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setPencilAnnotationSelection:(id)arg1;
- (void)setSelection:(id)arg1;

@end
