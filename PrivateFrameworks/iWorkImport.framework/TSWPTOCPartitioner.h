/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner> {
    TSWPTOCInfo * _info;
}

@property (nonatomic, readonly) TSWPTOCInfo *info;

- (void).cxx_destruct;
- (bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(bool)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (id)info;
- (id)initWithInfo:(id)arg1;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextHintForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
- (id)nextLayoutForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
- (void)setLayoutPartititionsRightToLeft:(bool)arg1 contentPartitionsRightToLeft:(bool)arg2;

@end
