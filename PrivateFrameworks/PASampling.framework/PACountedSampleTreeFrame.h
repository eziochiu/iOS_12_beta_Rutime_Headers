/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PACountedSampleTreeFrame : PACountedSampleFrame {
    NSMutableSet * _children;
    unsigned long long  _state;
    NSString * _waitInfoString;
}

@property (readonly) NSMutableSet *children;
@property (readonly) bool isLeafFrame;
@property unsigned long long state;
@property (retain) NSString *waitInfoString;

- (void).cxx_destruct;
- (id)children;
- (unsigned long long)hash;
- (id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 andWaitInfoString:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLeafFrame;
- (void)setState:(unsigned long long)arg1;
- (void)setWaitInfoString:(id)arg1;
- (unsigned long long)state;
- (id)waitInfoString;

@end
