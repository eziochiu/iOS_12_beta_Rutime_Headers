/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPencilAnnotation : TSPObject <TSKDocumentObject, TSKPencilAnnotation, TSPCopying, TSWPOverlappingField, TSWPTextSpanningObject> {
    TSWPStorage * _parentStorage;
    <TSKPencilAnnotationStorage> * _pencilAnnotationStorage;
    NSString * _textAttributeUUIDString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, retain) <TSKPencilAnnotationStorage> *pencilAnnotationStorage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textAttributeUUIDString;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)drawing;
- (unsigned long long)hash;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToObject:(id)arg1;
- (bool)isInDocument;
- (void)loadFromArchive:(const struct PencilAnnotationArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)parentStorage;
- (id)pencilAnnotationStorage;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchiver:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setPencilAnnotationStorage:(id)arg1;
- (id)textAttributeUUIDString;
- (id)uuid;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
