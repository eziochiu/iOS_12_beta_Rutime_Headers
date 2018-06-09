/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {
    BRCPCSChainInfo * _chainInfo;
    struct PQLResultSet { Class x1; } * _enumerator;
}

- (void).cxx_destruct;
- (id)chainInfo;
- (void)dealloc;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)nextObject;

@end
