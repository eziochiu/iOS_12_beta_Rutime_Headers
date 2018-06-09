/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    unsigned long long  _currentSinkIndex;
    int  _ordering;
    NSMutableArray * _stack;
}

- (id)_nextUnvisitedParent:(id)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2;
- (id)nextObject;

@end
