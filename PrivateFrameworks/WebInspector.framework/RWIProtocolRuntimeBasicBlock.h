/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int endOffset;
@property (nonatomic) int executionCount;
@property (nonatomic) bool hasExecuted;
@property (nonatomic) int startOffset;

- (int)endOffset;
- (int)executionCount;
- (bool)hasExecuted;
- (id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(bool)arg3 executionCount:(int)arg4;
- (void)setEndOffset:(int)arg1;
- (void)setExecutionCount:(int)arg1;
- (void)setHasExecuted:(bool)arg1;
- (void)setStartOffset:(int)arg1;
- (int)startOffset;

@end
