/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRange : NSObject {
    long long  _endOffset;
    DOMNode * _node;
    long long  _startOffset;
}

@property (nonatomic) long long endOffset;
@property (nonatomic, retain) DOMNode *node;
@property (nonatomic) long long startOffset;

+ (id)rangeWithDOMRange:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (long long)endOffset;
- (id)initWithDOMRange:(id)arg1;
- (id)node;
- (void)setEndOffset:(long long)arg1;
- (void)setNode:(id)arg1;
- (void)setStartOffset:(long long)arg1;
- (long long)startOffset;

@end
