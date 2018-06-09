/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLinkedTextBoxLayout : TSWPShapeLayout {
    unsigned long long  _indexInFlow;
}

@property (nonatomic, readonly) TSWPLinkedLayout *containedLayout;
@property (nonatomic) unsigned long long indexInFlow;

- (void)i_invalidateWrap;
- (unsigned long long)indexInFlow;
- (void)setIndexInFlow:(unsigned long long)arg1;

@end
