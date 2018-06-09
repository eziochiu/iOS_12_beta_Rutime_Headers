/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageStyler : NSObject {
    int  _attributeArrayKind;
    TSWPStorage * _storage;
}

@property (nonatomic) int attributeArrayKind;
@property (nonatomic, retain) TSWPStorage *storage;

- (void).cxx_destruct;
- (void)applyStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
- (int)attributeArrayKind;
- (id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2;
- (void)performStylingInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 undoTransaction:(struct TSWPStorageTransaction { }*)arg2;
- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributeArrayKind:(int)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
