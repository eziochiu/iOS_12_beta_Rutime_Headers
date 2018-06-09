/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPencilAnnotation : TSPObject <TSKDocumentObject, TSKPencilAnnotation, TSPCopying> {
    TSDDrawableInfo * _parent;
    TSDPencilAnnotationStorage * _pencilAnnotationStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSDDrawableInfo *parent;
@property (nonatomic, retain) TSDPencilAnnotationStorage *pencilAnnotationStorage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)needsObjectUUID;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)drawing;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (void)loadFromArchive:(const struct PencilAnnotationArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)parent;
- (id)pencilAnnotationStorage;
- (void)saveToArchiver:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPencilAnnotationStorage:(id)arg1;
- (id)uuid;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
