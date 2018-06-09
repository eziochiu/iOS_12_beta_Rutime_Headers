/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSKGraph : NSObject {
    unsigned long long  _currE;
    unsigned long long  _dump;
    struct edge { unsigned long long x1; unsigned long long x2[2]; unsigned long long x3; } * _edges;
    unsigned long long  _l_end;
    unsigned long long  _numE;
    unsigned long long  _numV;
    struct vertex { unsigned long long x1; unsigned long long x2; unsigned long long *x3; } * _vertices;
}

- (bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2;
- (struct edge {}**)isAcyclic;
- (bool)isEmpty;
- (unsigned long long)numOfEdges;

@end
