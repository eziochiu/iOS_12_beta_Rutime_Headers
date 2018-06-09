/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _TimelineGapNode : _TimelineNode {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

- (unsigned long long)count;
- (void)incrementCount;
- (void)setCount:(unsigned long long)arg1;

@end
