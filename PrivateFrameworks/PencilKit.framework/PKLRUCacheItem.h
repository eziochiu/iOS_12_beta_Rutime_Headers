/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKLRUCacheItem : NSObject {
    unsigned long long  _cost;
    <NSCopying> * _key;
    PKLRUCacheItem * _next;
    id  _object;
    PKLRUCacheItem * _prev;
}

- (void).cxx_destruct;

@end
