/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPencilAnnotationSelection : TSKSelection {
    TSPObject<TSKPencilAnnotation> * _pencilAnnotation;
}

@property (nonatomic, readonly) TSPObject<TSKPencilAnnotation> *pencilAnnotation;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (bool)canRemainDuringSharedReadOnlyMode;
- (bool)canSaveSelectionToArchivedViewState;
- (id)initWithPencilAnnotation:(id)arg1;
- (id)pencilAnnotation;

@end
