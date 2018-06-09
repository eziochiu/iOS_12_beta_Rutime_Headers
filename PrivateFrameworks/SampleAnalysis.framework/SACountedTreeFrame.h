/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SACountedTreeFrame : SACountedTreeNode <SAJSONSerialization> {
    NSMutableArray * _children;
    SAFrame * _frame;
    bool  _isLeafFrame;
}

@property (readonly) NSMutableArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SAFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) bool isLeafFrame;
@property (readonly) Class superclass;

+ (void)enumerateTree:(id)arg1 block:(id /* block */)arg2;
+ (id)treeFrameWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(bool)arg4;

- (void).cxx_destruct;
- (id)children;
- (id)frame;
- (id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(bool)arg4;
- (bool)isLeafFrame;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
