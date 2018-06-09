/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableComment : TSKSosBase <TSDComment> {
    NSString * _annotationUUID;
    TSDDrawableInfo * _parent;
    TSDCommentStorage * mStorage;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, retain) NSString *annotationUUID;
@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHighlight;
@property (nonatomic) TSDDrawableInfo *parent;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)annotationUUID;
- (id)author;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)initWithParent:(id)arg1 storage:(id)arg2;
- (bool)isFloatingComment;
- (bool)isHighlight;
- (bool)isInDocument;
- (void)p_updateAnnotationUUID;
- (id)parent;
- (void)setAnnotationUUID:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
